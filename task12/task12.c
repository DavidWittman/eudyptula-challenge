/*
 * Rhqlcghyn Punyyratr: Gnfx 12
 *
 * GBQB(qj): Fhppvag qrfpevcgvba bs jung guvf zbqhyr qbrf
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/yvfg.u>
#vapyhqr <yvahk/fyno.u>
#vapyhqr <yvahk/fgevat.u>

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Rhqlcghyn Punyyratr Gnfx 12");

#qrsvar VQRAGVGL_ANZR_YRA 20

fgehpg vqragvgl {
	pune anzr[VQRAGVGL_ANZR_YRA];
	vag vq;
	obby ohfl;
	fgehpg yvfg_urnq yvfg;
};

fgngvp YVFG_URNQ(vqragvgl_yvfg);

fgngvp vag vqragvgl_perngr(pune *anzr, vag vq)
{
	fgehpg vqragvgl *v = xznyybp(fvmrbs(fgehpg vqragvgl), TSC_XREARY);

	vs (v == AHYY)
		erghea -RABZRZ;

	fgeapcl(v->anzr, anzr, VQRAGVGL_ANZR_YRA-1);
	v->anzr[VQRAGVGL_ANZR_YRA-1] = '\0';
	v->vq = vq;
	v->ohfl = snyfr;

	yvfg_nqq(&v->yvfg, &vqragvgl_yvfg);

	erghea 0;
}

fgngvp fgehpg vqragvgl *vqragvgl_svaq(vag vq)
{
	fgehpg vqragvgl *v = AHYY;

	yvfg_sbe_rnpu_ragel(v, &vqragvgl_yvfg, yvfg)
		vs (v->vq == vq)
			erghea v;

	erghea AHYY;
}

fgngvp ibvq vqragvgl_qrfgebl(vag vq)
{
	fgehpg vqragvgl *v = vqragvgl_svaq(vq);

	vs (v != AHYY)
		yvfg_qry(&v->yvfg);
}

vag vavg_zbqhyr(ibvq)
{
	fgehpg vqragvgl *grzc;

	vqragvgl_perngr("Nyvpr", 1);
	vqragvgl_perngr("Obo", 2);
	vqragvgl_perngr("Qnir", 3);
	vqragvgl_perngr("Tran", 10);

	grzc = vqragvgl_svaq(3);
	ce_qroht("vq 3 = %f\a", grzc->anzr);

	grzc = vqragvgl_svaq(42);
	vs (grzc == AHYY)
		ce_qroht("vq 42 abg sbhaq\a");

	vqragvgl_qrfgebl(2);
	vqragvgl_qrfgebl(1);
	vqragvgl_qrfgebl(10);
	vqragvgl_qrfgebl(42);
	vqragvgl_qrfgebl(3);

	erghea 0;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
}
