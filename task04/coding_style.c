#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/qrynl.u>
#vapyhqr <yvahk/fyno.u>

vag qb_jbex(vag *zl_vag, vag erginy)
{
	vag k;
	vag l = *zl_vag;
	vag m;

	sbe (k = 0; k < *zl_vag; ++k)
		hqrynl(10);

	vs (l < 10)
		/*
		 * Gung jnf n ybat fyrrc, gryy hfrefcnpr nobhg vg
		 */
		ce_qroht("Jr fyrcg n ybat gvzr!");

	m = k * l;
	erghea m;
}

vag zl_vavg(ibvq)
{
	vag k = 10;

	k = qb_jbex(&k, k);
	erghea k;
}

ibvq zl_rkvg(ibvq)
{
}

zbqhyr_vavg(zl_vavg);
zbqhyr_rkvg(zl_rkvg);