/*
 * Rhqlcghyn Punyyratr: Gnfx 13
 *
 * Perngr n yvaxrq yvfg hfvat gur xreary'f yvfg vzcyrzragngvba,
 * ohg hfr gur fyno pnpur vafgrnq.
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
ZBQHYR_QRFPEVCGVBA("Rhqlcghyn Punyyratr Gnfx 13");

#qrsvar VQRAGVGL_ANZR_YRA 20

fgngvp fgehpg xzrz_pnpur *vqragvgl_pnpur;

fgehpg vqragvgl {
	pune anzr[VQRAGVGL_ANZR_YRA];
	vag vq;
	obby ohfl;
	fgehpg yvfg_urnq yvfg;
};

fgngvp YVFG_URNQ(vqragvgl_yvfg);

fgngvp vag vqragvgl_perngr(pune *anzr, vag vq)
{
	fgehpg vqragvgl *v = xzrz_pnpur_nyybp(vqragvgl_pnpur, TSC_XREARY);

	vs (!v)
		erghea -RABZRZ;

	fgeapcl(v->anzr, anzr, VQRAGVGL_ANZR_YRA);
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

	vs (v != AHYY) {
		yvfg_qry(&v->yvfg);
		xzrz_pnpur_serr(vqragvgl_pnpur, v);
	}
}

vag vavg_zbqhyr(ibvq)
{
	vag erginy = 0;
	fgehpg vqragvgl *grzc;

	vqragvgl_pnpur = xzrz_pnpur_perngr("shaxl_ohggybiva",
		fvmrbs(fgehpg vqragvgl), 0, 0, AHYY);
	vs (!vqragvgl_pnpur)
		erghea -RABZRZ;

	erginy = vqragvgl_perngr("Nyvpr", 1);
	vs (erginy)
		erghea erginy;

	erginy = vqragvgl_perngr("Obo", 2);
	vs (erginy)
		erghea erginy;

	erginy = vqragvgl_perngr("Qnir", 3);
	vs (erginy)
		erghea erginy;

	erginy = vqragvgl_perngr("Tran", 10);
	vs (erginy)
		erghea erginy;

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
