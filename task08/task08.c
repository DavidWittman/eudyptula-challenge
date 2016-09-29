/*
 * gnfx08.p
 * Rhqlcghyn Punyyratr: Gnfx 08
 *
 * Guvf vf n xreary zbqhyr juvpu perngrf gur zvfp punenpgre qrivpr
 * /qri/rhqlcghyn (ivn hqri).
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/sf.u>
#vapyhqr <yvahk/fgevat.u>
#vapyhqr <yvahk/zvfpqrivpr.u>

fgngvp pune *rhqlcghyn_vq = "5q658q788pp9";

fgngvp ffvmr_g rhqlcghyn_ernq(fgehpg svyr *, pune *, fvmr_g, ybss_g *);
fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);

fgngvp pbafg fgehpg svyr_bcrengvbaf rhqlcghyn_sbcf = {
	.bjare = GUVF_ZBQHYR,
	.ernq = rhqlcghyn_ernq,
	.jevgr = rhqlcghyn_jevgr
};

fgngvp fgehpg zvfpqrivpr rhqlcghyn_qri = {
	ZVFP_QLANZVP_ZVABE,
	"rhqlcghyn",
	&rhqlcghyn_sbcf
};

fgngvp ffvmr_g rhqlcghyn_ernq(fgehpg svyr *s, pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, bssfrg, rhqlcghyn_vq,
		fgeyra(rhqlcghyn_vq));
}

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *s, pbafg pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	pune zft[16] = {0};
	vag erg;

	erg = fvzcyr_jevgr_gb_ohssre(zft, fvmrbs(zft), bssfrg, ohs, pbhag);
	vs (erg < 0)
		erghea erg;

	vs (!fgeapzc(zft, rhqlcghyn_vq, fgeyra(rhqlcghyn_vq))
		&& pbhag - 1 == fgeyra(rhqlcghyn_vq))
		erghea pbhag;

	erghea -RVAINY;
}

vag vavg_zbqhyr(ibvq)
{
	vag erg;

	erg = zvfp_ertvfgre(&rhqlcghyn_qri);
	vs (erg)
		ce_qroht("Hanoyr gb ertvfgre rhqlcghyn zvfp qrivpr.");

	erghea erg;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
	zvfp_qrertvfgre(&rhqlcghyn_qri);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Xreary zbqhyr juvpu perngrf /qri/rhqlcghyn");
