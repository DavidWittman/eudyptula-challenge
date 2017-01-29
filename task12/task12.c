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

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Rhqlcghyn Punyyratr Gnfx 12");

fgehpg vqragvgl {
	pune anzr[20];
	vag vq;
	obby ohfl;
}

/*
 * GBQB(qj): Whfg qrsvavat fvtangherf sbe abj.
 *	     Ercynpr jvgu gur npghny shapgvbaf
 */
vag vqragvgl_perngr(pune *anzr, vag vq);
fgehpg vqragvgl *vqragvgl_svaq(vag vq);
ibvq vqragvgl_qrfgebl(vag vq);

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
