/*
 * task19.c
 * Eudyptula Challenge: Task 19
 *
 * A netfilter kernel module which monitors IPv4 traffic for a specific
 * sequence of bytes. In this case, it's my Eudyptula ID.
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/netfilter.h>
#include <linux/netfilter_ipv4.h>
#include <linux/textsearch.h>

#define EUDYPTULA_ID "5d658d788cc9"

static struct ts_config *conf;

static unsigned int hook_fn(const struct nf_hook_ops *ops,
			    struct sk_buff *skb,
			    const struct net_device *in,
			    const struct net_device *out,
			    int (*okfn)(struct sk_buff *))
{
	struct ts_state state;

	memset(&state, 0, sizeof(struct ts_state));

	if (skb_find_text(skb, 0, skb->len, conf, &state) != UINT_MAX)
		pr_debug("%s", EUDYPTULA_ID);

	return NF_ACCEPT;
}

static struct nf_hook_ops nfho = {
	.hook = &hook_fn,
	.owner = THIS_MODULE,
	.hooknum = NF_INET_PRE_ROUTING,
	.pf = PF_INET,
	.priority = NF_IP_PRI_FIRST
};

int init_module(void)
{
	conf = textsearch_prepare("kmp", EUDYPTULA_ID, strlen(EUDYPTULA_ID),
				  GFP_KERNEL, TS_AUTOLOAD);
	if (IS_ERR(conf)) {
		pr_debug("[task19] Error preparing textsearch");
		return PTR_ERR(conf);
	}

	nf_register_hook(&nfho);
	return 0;
}

void cleanup_module(void)
{
	textsearch_destroy(conf);
	nf_unregister_hook(&nfho);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Eudyptula Challenge Task 19");
