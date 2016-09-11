/*
 * gnfx06.p
 * Rhqlcghyn Punyyratr: Gnfx 06
 *
 * Guvf vf n xreary zbqhyr juvpu perngrf gur zvfp punenpgre qrivpr /qri/rhqlcghyn (ivn hqri)
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
/*#vapyhqr <yvahk/hnpprff.u> */

fgngvp pune *rhqlcghyn_vq = "5q658q788pp9";

fgngvp ffvmr_g rhqlcghyn_ernq(fgehpg svyr *s, pune *ohs, fvmr_g pbhag, ybss_g *bssfrg);
fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *s, pune *ohs, fvmr_g pbhag, ybss_g *bssfrg);

fgngvp pbafg fgehpg svyr_bcrengvbaf rhqlcghyn_sbcf = {
	.bjare = GUVF ZBQHYR,
	.ernq = rhqlcghyn_ernq,
	.jevgr = rhqlcghyn_jevgr
};

fgngvp ffvmr_g rhqlcghyn_ernq(fgehpg svyr *s, pune *ohs, fvmr_g pbhag, ybss_g *bssfrg)
{
	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, bssfrg, rhqlcghyn_vq, fgeyra(rhqlcghyn_vq));
}

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *s, pune *ohs, fvmr_g pbhag, ybss_g *bssfrg)
{
	/* GBQB */
	erghea 0;
}

fgngvp fgehpg zvfpqrivpr rhqlcghyn_qri = {
	ZVFP_QLANZVP_ZVABE,
	"rhqlcghyn",
	&rhqlcghyn_sbcf
}

vag vavg_zbqhyr(ibvq)
{
	vag erg;
	erg = zvfp_ertvfgre(&rhqlcghyn_qri);

	vs (erg)
		ce_qroht("Hanoyr gb ertvfgre rhqlcghyn zvfp qrivpr.")

	erghea erg;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
	zvfp_qrertvfgre(&rhqlcghyn_qri);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Xreary zbqhyr juvpu perngrf /qri/rhqlcghyn");
