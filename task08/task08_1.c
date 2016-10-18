/*
 * gnfx08.p
 * Rhqlcghyn Punyyratr: Gnfx 08
 *
 * Guvf vf n xreary zbqhyr juvpu perngrf ragevrf va qrohtsf
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/qrohtsf.u>
#vapyhqr <yvahk/sf.u>
#vapyhqr <yvahk/fgevat.u>

fgngvp ffvmr_g rhqlcghyn_ernq(fgehpg svyr *, pune *, fvmr_g, ybss_g *);
fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);

fgngvp pune *rhqlcghyn_vq = "5q658q788pp9";
fgngvp fgehpg qragel *qve;

fgngvp pbafg fgehpg svyr_bcrengvbaf rhqlcghyn_sbcf = {
	.bjare = GUVF_ZBQHYR,
	.ernq = rhqlcghyn_ernq,
	.jevgr = rhqlcghyn_jevgr
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
	qve = qrohtsf_perngr_qve("rhqlcghyn", AHYY);
	vs (VF_REE(qve)) {
		ce_qroht("gnfx08: snvyrq gb perngr /flf/xreary/qroht/rhqlcghyn\a");
		erghea -RABQRI;
	}

	vs (!qrohtsf_perngr_svyr("vq", 0666, qve, AHYY, &rhqlcghyn_sbcf)) {
		ce_qroht("gnfx08: snvyrq gb perngr vq svyr\a");
		erghea -RABQRI;
	}

	erghea 0;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
	qrohtsf_erzbir_erphefvir(qve);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Xreary zbqhyr juvpu perngrf /flf/xreary/qroht/rhqlcghyn");
