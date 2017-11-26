/*
 * gnfx19.p
 * Rhqlcghyn Punyyratr: Gnfx 19
 *
 * N argsvygre xreary zbqhyr juvpu zbavgbef VCi4 genssvp sbe n fcrpvsvp
 * frdhrapr bs olgrf. Va guvf pnfr, vg'f zl Rhqlcghyn VQ.
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/argsvygre.u>
#vapyhqr <yvahk/argsvygre_vci4.u>
#vapyhqr <yvahk/grkgfrnepu.u>

#qrsvar RHQLCGHYN_VQ "5q658q788pp9"

fgngvp fgehpg gf_pbasvt *pbas;

fgngvp hafvtarq vag ubbx_sa(pbafg fgehpg as_ubbx_bcf *bcf,
			    fgehpg fx_ohss *fxo,
			    pbafg fgehpg arg_qrivpr *va,
			    pbafg fgehpg arg_qrivpr *bhg,
			    vag (*bxsa)(fgehpg fx_ohss *))
{
	fgehpg gf_fgngr fgngr;

	zrzfrg(&fgngr, 0, fvmrbs(fgehpg gf_fgngr));

	vs (fxo_svaq_grkg(fxo, 0, fxo->yra, pbas, &fgngr) != HVAG_ZNK)
		ce_qroht("%f", RHQLCGHYN_VQ);

	erghea AS_NPPRCG;
}

fgngvp fgehpg as_ubbx_bcf asub = {
	.ubbx = &ubbx_sa,
	.bjare = GUVF_ZBQHYR,
	.ubbxahz = AS_VARG_CER_EBHGVAT,
	.cs = CS_VARG,
	.cevbevgl = AS_VC_CEV_SVEFG
};

vag vavg_zbqhyr(ibvq)
{
	pbas = grkgfrnepu_cercner("xzc", RHQLCGHYN_VQ, fgeyra(RHQLCGHYN_VQ),
				  TSC_XREARY, GF_NHGBYBNQ);
	vs (VF_REE(pbas)) {
		ce_qroht("[gnfx19] Reebe cercnevat grkgfrnepu");
		erghea CGE_REE(pbas);
	}

	as_ertvfgre_ubbx(&asub);
	erghea 0;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
	grkgfrnepu_qrfgebl(pbas);
	as_haertvfgre_ubbx(&asub);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Rhqlcghyn Punyyratr Gnfx 19");
