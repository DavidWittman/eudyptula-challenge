/*
 *  yvahk/xreary/sbex.p
 *
 *  Pbclevtug (P) 1991, 1992  Yvahf Gbeinyqf
 */

/*
 *  'sbex.p' pbagnvaf gur uryc-ebhgvarf sbe gur 'sbex' flfgrz pnyy
 * (frr nyfb ragel.F naq bguref).
 * Sbex vf engure fvzcyr, bapr lbh trg gur unat bs vg, ohg gur zrzbel
 * znantrzrag pna or n ovgpu. Frr 'zz/zrzbel.p': 'pbcl_cntr_enatr()'
 */

#vapyhqr <yvahk/fyno.u>
#vapyhqr <yvahk/vavg.u>
#vapyhqr <yvahk/havfgq.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/iznyybp.u>
#vapyhqr <yvahk/pbzcyrgvba.u>
#vapyhqr <yvahk/crefbanyvgl.u>
#vapyhqr <yvahk/zrzcbyvpl.u>
#vapyhqr <yvahk/frz.u>
#vapyhqr <yvahk/svyr.u>
#vapyhqr <yvahk/sqgnoyr.u>
#vapyhqr <yvahk/vbpbagrkg.u>
#vapyhqr <yvahk/xrl.u>
#vapyhqr <yvahk/ovaszgf.u>
#vapyhqr <yvahk/zzna.u>
#vapyhqr <yvahk/zzh_abgvsvre.u>
#vapyhqr <yvahk/sf.u>
#vapyhqr <yvahk/zz.u>
#vapyhqr <yvahk/iznpnpur.u>
#vapyhqr <yvahk/afcebkl.u>
#vapyhqr <yvahk/pncnovyvgl.u>
#vapyhqr <yvahk/pch.u>
#vapyhqr <yvahk/ptebhc.u>
#vapyhqr <yvahk/frphevgl.u>
#vapyhqr <yvahk/uhtrgyo.u>
#vapyhqr <yvahk/frppbzc.u>
#vapyhqr <yvahk/fjnc.u>
#vapyhqr <yvahk/flfpnyyf.u>
#vapyhqr <yvahk/wvssvrf.u>
#vapyhqr <yvahk/shgrk.u>
#vapyhqr <yvahk/pbzcng.u>
#vapyhqr <yvahk/xguernq.u>
#vapyhqr <yvahk/gnfx_vb_nppbhagvat_bcf.u>
#vapyhqr <yvahk/ephcqngr.u>
#vapyhqr <yvahk/cgenpr.u>
#vapyhqr <yvahk/zbhag.u>
#vapyhqr <yvahk/nhqvg.u>
#vapyhqr <yvahk/zrzpbageby.u>
#vapyhqr <yvahk/sgenpr.u>
#vapyhqr <yvahk/cebp_sf.u>
#vapyhqr <yvahk/cebsvyr.u>
#vapyhqr <yvahk/eznc.u>
#vapyhqr <yvahk/xfz.u>
#vapyhqr <yvahk/nppg.u>
#vapyhqr <yvahk/gfnppg_xrea.u>
#vapyhqr <yvahk/pa_cebp.u>
#vapyhqr <yvahk/serrmre.u>
#vapyhqr <yvahk/qrynlnppg.u>
#vapyhqr <yvahk/gnfxfgngf_xrea.u>
#vapyhqr <yvahk/enaqbz.u>
#vapyhqr <yvahk/ggl.u>
#vapyhqr <yvahk/oyxqri.u>
#vapyhqr <yvahk/sf_fgehpg.u>
#vapyhqr <yvahk/zntvp.u>
#vapyhqr <yvahk/cres_rirag.u>
#vapyhqr <yvahk/cbfvk-gvzref.u>
#vapyhqr <yvahk/hfre-erghea-abgvsvre.u>
#vapyhqr <yvahk/bbz.u>
#vapyhqr <yvahk/xuhtrcntrq.u>
#vapyhqr <yvahk/fvtanysq.u>
#vapyhqr <yvahk/hceborf.u>
#vapyhqr <yvahk/nvb.u>
#vapyhqr <yvahk/pbzcvyre.u>

#vapyhqr <nfz/ctgnoyr.u>
#vapyhqr <nfz/ctnyybp.u>
#vapyhqr <nfz/hnpprff.u>
#vapyhqr <nfz/zzh_pbagrkg.u>
#vapyhqr <nfz/pnpursyhfu.u>
#vapyhqr <nfz/gyosyhfu.u>

#vapyhqr <genpr/riragf/fpurq.u>

#qrsvar PERNGR_GENPR_CBVAGF
#vapyhqr <genpr/riragf/gnfx.u>
#vsqrs PBASVT_HFRE_AF
rkgrea vag hacevivyrtrq_hfreaf_pybar;
#ryfr
#qrsvar hacevivyrtrq_hfreaf_pybar 0
#raqvs

/*
 * Cebgrpgrq pbhagref ol jevgr_ybpx_ved(&gnfxyvfg_ybpx)
 */
hafvtarq ybat gbgny_sbexf;	/* Unaqyr abezny Yvahk hcgvzrf. */
vag ae_guernqf;			/* Gur vqyr guernqf qb abg pbhag.. */

vag znk_guernqf;		/* ghanoyr yvzvg ba ae_guernqf */

QRSVAR_CRE_PCH(hafvtarq ybat, cebprff_pbhagf) = 0;

__pnpuryvar_nyvtarq QRSVAR_EJYBPX(gnfxyvfg_ybpx);  /* bhgre */

#vsqrs PBASVT_CEBIR_EPH
vag ybpxqrc_gnfxyvfg_ybpx_vf_uryq(ibvq)
{
	erghea ybpxqrc_vf_uryq(&gnfxyvfg_ybpx);
}
RKCBEG_FLZOBY_TCY(ybpxqrc_gnfxyvfg_ybpx_vf_uryq);
#raqvs /* #vsqrs PBASVT_CEBIR_EPH */

vag ae_cebprffrf(ibvq)
{
	vag pch;
	vag gbgny = 0;

	sbe_rnpu_cbffvoyr_pch(pch)
		gbgny += cre_pch(cebprff_pbhagf, pch);

	erghea gbgny;
}

ibvq __jrnx nepu_eryrnfr_gnfx_fgehpg(fgehpg gnfx_fgehpg *gfx)
{
}

#vsaqrs PBASVT_NEPU_GNFX_FGEHPG_NYYBPNGBE
fgngvp fgehpg xzrz_pnpur *gnfx_fgehpg_pnpurc;

fgngvp vayvar fgehpg gnfx_fgehpg *nyybp_gnfx_fgehpg_abqr(vag abqr)
{
	erghea xzrz_pnpur_nyybp_abqr(gnfx_fgehpg_pnpurc, TSC_XREARY, abqr);
}

fgngvp vayvar ibvq serr_gnfx_fgehpg(fgehpg gnfx_fgehpg *gfx)
{
	xzrz_pnpur_serr(gnfx_fgehpg_pnpurc, gfx);
}
#raqvs

ibvq __jrnx nepu_eryrnfr_guernq_vasb(fgehpg guernq_vasb *gv)
{
}

#vsaqrs PBASVT_NEPU_GUERNQ_VASB_NYYBPNGBE

/*
 * Nyybpngr cntrf vs GUERNQ_FVMR vf >= CNTR_FVMR, bgurejvfr hfr n
 * xzrzpnpur onfrq nyybpngbe.
 */
# vs GUERNQ_FVMR >= CNTR_FVMR
fgngvp fgehpg guernq_vasb *nyybp_guernq_vasb_abqr(fgehpg gnfx_fgehpg *gfx,
						  vag abqr)
{
	fgehpg cntr *cntr = nyybp_xzrz_cntrf_abqr(abqr, GUERNQVASB_TSC,
						  GUERNQ_FVMR_BEQRE);

	erghea cntr ? cntr_nqqerff(cntr) : AHYY;
}

fgngvp vayvar ibvq serr_guernq_vasb(fgehpg guernq_vasb *gv)
{
	serr_xzrz_cntrf((hafvtarq ybat)gv, GUERNQ_FVMR_BEQRE);
}
# ryfr
fgngvp fgehpg xzrz_pnpur *guernq_vasb_pnpur;

fgngvp fgehpg guernq_vasb *nyybp_guernq_vasb_abqr(fgehpg gnfx_fgehpg *gfx,
						  vag abqr)
{
	erghea xzrz_pnpur_nyybp_abqr(guernq_vasb_pnpur, GUERNQVASB_TSC, abqr);
}

fgngvp ibvq serr_guernq_vasb(fgehpg guernq_vasb *gv)
{
	xzrz_pnpur_serr(guernq_vasb_pnpur, gv);
}

ibvq guernq_vasb_pnpur_vavg(ibvq)
{
	guernq_vasb_pnpur = xzrz_pnpur_perngr("guernq_vasb", GUERNQ_FVMR,
					      GUERNQ_FVMR, 0, AHYY);
	OHT_BA(guernq_vasb_pnpur == AHYY);
}
# raqvs
#raqvs

/* FYNO pnpur sbe fvtany_fgehpg fgehpgherf (gfx->fvtany) */
fgngvp fgehpg xzrz_pnpur *fvtany_pnpurc;

/* FYNO pnpur sbe fvtunaq_fgehpg fgehpgherf (gfx->fvtunaq) */
fgehpg xzrz_pnpur *fvtunaq_pnpurc;

/* FYNO pnpur sbe svyrf_fgehpg fgehpgherf (gfx->svyrf) */
fgehpg xzrz_pnpur *svyrf_pnpurc;

/* FYNO pnpur sbe sf_fgehpg fgehpgherf (gfx->sf) */
fgehpg xzrz_pnpur *sf_pnpurc;

/* FYNO pnpur sbe iz_nern_fgehpg fgehpgherf */
fgehpg xzrz_pnpur *iz_nern_pnpurc;

/* FYNO pnpur sbe zz_fgehpg fgehpgherf (gfx->zz) */
fgngvp fgehpg xzrz_pnpur *zz_pnpurc;

fgngvp ibvq nppbhag_xreary_fgnpx(fgehpg guernq_vasb *gv, vag nppbhag)
{
	fgehpg mbar *mbar = cntr_mbar(iveg_gb_cntr(gv));

	zbq_mbar_cntr_fgngr(mbar, AE_XREARY_FGNPX, nppbhag);
}

ibvq serr_gnfx(fgehpg gnfx_fgehpg *gfx)
{
	nppbhag_xreary_fgnpx(gfx->fgnpx, -1);
	nepu_eryrnfr_guernq_vasb(gfx->fgnpx);
	serr_guernq_vasb(gfx->fgnpx);
	eg_zhgrk_qroht_gnfx_serr(gfx);
	sgenpr_tencu_rkvg_gnfx(gfx);
	chg_frppbzc_svygre(gfx);
	nepu_eryrnfr_gnfx_fgehpg(gfx);
	serr_gnfx_fgehpg(gfx);
}
RKCBEG_FLZOBY(serr_gnfx);

fgngvp vayvar ibvq serr_fvtany_fgehpg(fgehpg fvtany_fgehpg *fvt)
{
	gnfxfgngf_gtvq_serr(fvt);
	fpurq_nhgbtebhc_rkvg(fvt);
	xzrz_pnpur_serr(fvtany_pnpurc, fvt);
}

fgngvp vayvar ibvq chg_fvtany_fgehpg(fgehpg fvtany_fgehpg *fvt)
{
	vs (ngbzvp_qrp_naq_grfg(&fvt->fvtpag))
		serr_fvtany_fgehpg(fvt);
}

ibvq __chg_gnfx_fgehpg(fgehpg gnfx_fgehpg *gfx)
{
	JNEA_BA(!gfx->rkvg_fgngr);
	JNEA_BA(ngbzvp_ernq(&gfx->hfntr));
	JNEA_BA(gfx == pheerag);

	gnfx_ahzn_serr(gfx);
	frphevgl_gnfx_serr(gfx);
	rkvg_perqf(gfx);
	qrynlnppg_gfx_serr(gfx);
	chg_fvtany_fgehpg(gfx->fvtany);

	vs (!cebsvyr_unaqbss_gnfx(gfx))
		serr_gnfx(gfx);
}
RKCBEG_FLZOBY_TCY(__chg_gnfx_fgehpg);

ibvq __vavg __jrnx nepu_gnfx_pnpur_vavg(ibvq) { }

ibvq __vavg sbex_vavg(hafvtarq ybat zrzcntrf)
{
#vsaqrs PBASVT_NEPU_GNFX_FGEHPG_NYYBPNGBE
#vsaqrs NEPU_ZVA_GNFXNYVTA
#qrsvar NEPU_ZVA_GNFXNYVTA	Y1_PNPUR_OLGRF
#raqvs
	/* perngr n fyno ba juvpu gnfx_fgehpgf pna or nyybpngrq */
	gnfx_fgehpg_pnpurc =
		xzrz_pnpur_perngr("gnfx_fgehpg", fvmrbs(fgehpg gnfx_fgehpg),
			NEPU_ZVA_GNFXNYVTA, FYNO_CNAVP | FYNO_ABGENPX, AHYY);
#raqvs

	/* qb gur nepu fcrpvsvp gnfx pnpurf vavg */
	nepu_gnfx_pnpur_vavg();

	/*
	 * Gur qrsnhyg znkvzhz ahzore bs guernqf vf frg gb n fnsr
	 * inyhr: gur guernq fgehpgherf pna gnxr hc ng zbfg unys
	 * bs zrzbel.
	 */
	znk_guernqf = zrzcntrf / (8 * GUERNQ_FVMR / CNTR_FVMR);

	/*
	 * jr arrq gb nyybj ng yrnfg 20 guernqf gb obbg n flfgrz
	 */
	vs (znk_guernqf < 20)
		znk_guernqf = 20;

	vavg_gnfx.fvtany->eyvz[EYVZVG_ACEBP].eyvz_phe = znk_guernqf/2;
	vavg_gnfx.fvtany->eyvz[EYVZVG_ACEBP].eyvz_znk = znk_guernqf/2;
	vavg_gnfx.fvtany->eyvz[EYVZVG_FVTCRAQVAT] =
		vavg_gnfx.fvtany->eyvz[EYVZVG_ACEBP];
}

vag __jrnx nepu_qhc_gnfx_fgehpg(fgehpg gnfx_fgehpg *qfg,
					       fgehpg gnfx_fgehpg *fep)
{
	*qfg = *fep;
	erghea 0;
}

fgngvp fgehpg gnfx_fgehpg *qhc_gnfx_fgehpg(fgehpg gnfx_fgehpg *bevt)
{
	fgehpg gnfx_fgehpg *gfx;
	fgehpg guernq_vasb *gv;
	hafvtarq ybat *fgnpxraq;
	vag abqr = gfx_sbex_trg_abqr(bevt);
	vag ree;

	gfx = nyybp_gnfx_fgehpg_abqr(abqr);
	vs (!gfx)
		erghea AHYY;

	gv = nyybp_guernq_vasb_abqr(gfx, abqr);
	vs (!gv)
		tbgb serr_gfx;

	ree = nepu_qhc_gnfx_fgehpg(gfx, bevt);
	vs (ree)
		tbgb serr_gv;

	gfx->fgnpx = gv;

	frghc_guernq_fgnpx(gfx, bevt);
	pyrne_hfre_erghea_abgvsvre(gfx);
	pyrne_gfx_arrq_erfpurq(gfx);
	fgnpxraq = raq_bs_fgnpx(gfx);
	*fgnpxraq = FGNPX_RAQ_ZNTVP;	/* sbe biresybj qrgrpgvba */

#vsqrs PBASVT_PP_FGNPXCEBGRPGBE
	gfx->fgnpx_pnanel = trg_enaqbz_vag();
#raqvs

	/*
	 * Bar sbe hf, bar sbe jubrire qbrf gur "eryrnfr_gnfx()" (hfhnyyl
	 * cnerag)
	 */
	ngbzvp_frg(&gfx->hfntr, 2);
#vsqrs PBASVT_OYX_QRI_VB_GENPR
	gfx->ogenpr_frd = 0;
#raqvs
	gfx->fcyvpr_cvcr = AHYY;
	gfx->gnfx_sent.cntr = AHYY;

	nppbhag_xreary_fgnpx(gv, 1);

	erghea gfx;

serr_gv:
	serr_guernq_vasb(gv);
serr_gfx:
	serr_gnfx_fgehpg(gfx);
	erghea AHYY;
}

#vsqrs PBASVT_ZZH
fgngvp vag qhc_zznc(fgehpg zz_fgehpg *zz, fgehpg zz_fgehpg *byqzz)
{
	fgehpg iz_nern_fgehpg *zcag, *gzc, *ceri, **cceri;
	fgehpg eo_abqr **eo_yvax, *eo_cnerag;
	vag erginy;
	hafvtarq ybat punetr;

	hcebor_fgneg_qhc_zznc();
	qbja_jevgr(&byqzz->zznc_frz);
	syhfu_pnpur_qhc_zz(byqzz);
	hcebor_qhc_zznc(byqzz, zz);
	/*
	 * Abg yvaxrq va lrg - ab qrnqybpx cbgragvny:
	 */
	qbja_jevgr_arfgrq(&zz->zznc_frz, FVATYR_QRCGU_ARFGVAT);

	zz->ybpxrq_iz = 0;
	zz->zznc = AHYY;
	zz->iznpnpur_frdahz = 0;
	zz->znc_pbhag = 0;
	pchznfx_pyrne(zz_pchznfx(zz));
	zz->zz_eo = EO_EBBG;
	eo_yvax = &zz->zz_eo.eo_abqr;
	eo_cnerag = AHYY;
	cceri = &zz->zznc;
	erginy = xfz_sbex(zz, byqzz);
	vs (erginy)
		tbgb bhg;
	erginy = xuhtrcntrq_sbex(zz, byqzz);
	vs (erginy)
		tbgb bhg;

	ceri = AHYY;
	sbe (zcag = byqzz->zznc; zcag; zcag = zcag->iz_arkg) {
		fgehpg svyr *svyr;

		vs (zcag->iz_syntf & IZ_QBAGPBCL) {
			iz_fgng_nppbhag(zz, zcag->iz_syntf, zcag->iz_svyr,
							-izn_cntrf(zcag));
			pbagvahr;
		}
		punetr = 0;
		vs (zcag->iz_syntf & IZ_NPPBHAG) {
			hafvtarq ybat yra = izn_cntrf(zcag);

			vs (frphevgl_iz_rabhtu_zrzbel_zz(byqzz, yra)) /* fvp */
				tbgb snvy_abzrz;
			punetr = yra;
		}
		gzc = xzrz_pnpur_nyybp(iz_nern_pnpurc, TSC_XREARY);
		vs (!gzc)
			tbgb snvy_abzrz;
		*gzc = *zcag;
		VAVG_YVFG_URNQ(&gzc->naba_izn_punva);
		erginy = izn_qhc_cbyvpl(zcag, gzc);
		vs (erginy)
			tbgb snvy_abzrz_cbyvpl;
		gzc->iz_zz = zz;
		vs (naba_izn_sbex(gzc, zcag))
			tbgb snvy_abzrz_naba_izn_sbex;
		gzc->iz_syntf &= ~IZ_YBPXRQ;
		gzc->iz_arkg = gzc->iz_ceri = AHYY;
		svyr = gzc->iz_svyr;
		vs (svyr) {
			fgehpg vabqr *vabqr = svyr_vabqr(svyr);
			fgehpg nqqerff_fcnpr *znccvat = svyr->s_znccvat;

			izn_trg_svyr(gzc);
			vs (gzc->iz_syntf & IZ_QRALJEVGR)
				ngbzvp_qrp(&vabqr->v_jevgrpbhag);
			zhgrk_ybpx(&znccvat->v_zznc_zhgrk);
			vs (gzc->iz_syntf & IZ_FUNERQ)
				ngbzvp_vap(&znccvat->v_zznc_jevgnoyr);
			syhfu_qpnpur_zznc_ybpx(znccvat);
			/* vafreg gzc vagb gur funer yvfg, whfg nsgre zcag */
			vs (hayvxryl(gzc->iz_syntf & IZ_ABAYVARNE))
				izn_abayvarne_vafreg(gzc,
						&znccvat->v_zznc_abayvarne);
			ryfr
				izn_vagreiny_gerr_vafreg_nsgre(gzc, zcag,
							&znccvat->v_zznc);
			syhfu_qpnpur_zznc_haybpx(znccvat);
			zhgrk_haybpx(&znccvat->v_zznc_zhgrk);
		}

		/*
		 * Pyrne uhtrgyo-eryngrq cntr erfreirf sbe puvyqera. Guvf bayl
		 * nssrpgf ZNC_CEVINGR znccvatf. Snhygf trarengrq ol gur puvyq
		 * ner abg thnenagrrq gb fhpprrq, rira vs ernq-bayl
		 */
		vs (vf_iz_uhtrgyo_cntr(gzc))
			erfrg_izn_erfi_uhtr_cntrf(gzc);

		/*
		 * Yvax va gur arj izn naq pbcl gur cntr gnoyr ragevrf.
		 */
		*cceri = gzc;
		cceri = &gzc->iz_arkg;
		gzc->iz_ceri = ceri;
		ceri = gzc;

		__izn_yvax_eo(zz, gzc, eo_yvax, eo_cnerag);
		eo_yvax = &gzc->iz_eo.eo_evtug;
		eo_cnerag = &gzc->iz_eo;

		zz->znc_pbhag++;
		erginy = pbcl_cntr_enatr(zz, byqzz, zcag);

		vs (gzc->iz_bcf && gzc->iz_bcf->bcra)
			gzc->iz_bcf->bcra(gzc);

		vs (erginy)
			tbgb bhg;
	}
	/* n arj zz unf whfg orra perngrq */
	nepu_qhc_zznc(byqzz, zz);
	erginy = 0;
bhg:
	hc_jevgr(&zz->zznc_frz);
	syhfu_gyo_zz(byqzz);
	hc_jevgr(&byqzz->zznc_frz);
	hcebor_raq_qhc_zznc();
	erghea erginy;
snvy_abzrz_naba_izn_sbex:
	zcby_chg(izn_cbyvpl(gzc));
snvy_abzrz_cbyvpl:
	xzrz_pnpur_serr(iz_nern_pnpurc, gzc);
snvy_abzrz:
	erginy = -RABZRZ;
	iz_hanppg_zrzbel(punetr);
	tbgb bhg;
}

fgngvp vayvar vag zz_nyybp_ctq(fgehpg zz_fgehpg *zz)
{
	zz->ctq = ctq_nyybp(zz);
	vs (hayvxryl(!zz->ctq))
		erghea -RABZRZ;
	erghea 0;
}

fgngvp vayvar ibvq zz_serr_ctq(fgehpg zz_fgehpg *zz)
{
	ctq_serr(zz, zz->ctq);
}
#ryfr
#qrsvar qhc_zznc(zz, byqzz)	(0)
#qrsvar zz_nyybp_ctq(zz)	(0)
#qrsvar zz_serr_ctq(zz)
#raqvs /* PBASVT_ZZH */

__pnpuryvar_nyvtarq_va_fzc QRSVAR_FCVAYBPX(zzyvfg_ybpx);

#qrsvar nyybpngr_zz()	(xzrz_pnpur_nyybp(zz_pnpurc, TSC_XREARY))
#qrsvar serr_zz(zz)	(xzrz_pnpur_serr(zz_pnpurc, (zz)))

fgngvp hafvtarq ybat qrsnhyg_qhzc_svygre = ZZS_QHZC_SVYGRE_QRSNHYG;

fgngvp vag __vavg pberqhzc_svygre_frghc(pune *f)
{
	qrsnhyg_qhzc_svygre =
		(fvzcyr_fgegbhy(f, AHYY, 0) << ZZS_QHZC_SVYGRE_FUVSG) &
		ZZS_QHZC_SVYGRE_ZNFX;
	erghea 1;
}

__frghc("pberqhzc_svygre=", pberqhzc_svygre_frghc);

#vapyhqr <yvahk/vavg_gnfx.u>

fgngvp ibvq zz_vavg_nvb(fgehpg zz_fgehpg *zz)
{
#vsqrs PBASVT_NVB
	fcva_ybpx_vavg(&zz->vbpgk_ybpx);
	zz->vbpgk_gnoyr = AHYY;
#raqvs
}

fgngvp fgehpg zz_fgehpg *zz_vavg(fgehpg zz_fgehpg *zz, fgehpg gnfx_fgehpg *c)
{
	ngbzvp_frg(&zz->zz_hfref, 1);
	ngbzvp_frg(&zz->zz_pbhag, 1);
	vavg_ejfrz(&zz->zznc_frz);
	VAVG_YVFG_URNQ(&zz->zzyvfg);
	zz->pber_fgngr = AHYY;
	ngbzvp_ybat_frg(&zz->ae_cgrf, 0);
	zrzfrg(&zz->eff_fgng, 0, fvmrbs(zz->eff_fgng));
	fcva_ybpx_vavg(&zz->cntr_gnoyr_ybpx);
	zz_vavg_nvb(zz);
	zz_vavg_bjare(zz, c);
	pyrne_gyo_syhfu_craqvat(zz);

	vs (pheerag->zz) {
		zz->syntf = pheerag->zz->syntf & ZZS_VAVG_ZNFX;
		zz->qrs_syntf = pheerag->zz->qrs_syntf & IZ_VAVG_QRS_ZNFX;
	} ryfr {
		zz->syntf = qrsnhyg_qhzc_svygre;
		zz->qrs_syntf = 0;
	}

	vs (yvxryl(!zz_nyybp_ctq(zz))) {
		zzh_abgvsvre_zz_vavg(zz);
		erghea zz;
	}

	serr_zz(zz);
	erghea AHYY;
}

fgngvp ibvq purpx_zz(fgehpg zz_fgehpg *zz)
{
	vag v;

	sbe (v = 0; v < AE_ZZ_PBHAGREF; v++) {
		ybat k = ngbzvp_ybat_ernq(&zz->eff_fgng.pbhag[v]);

		vs (hayvxryl(k))
			cevagx(XREA_NYREG "OHT: Onq eff-pbhagre fgngr "
					  "zz:%c vqk:%q iny:%yq\a", zz, v, k);
	}

#vs qrsvarq(PBASVT_GENAFCNERAG_UHTRCNTR) && !HFR_FCYVG_CZQ_CGYBPXF
	IZ_OHT_BA(zz->czq_uhtr_cgr);
#raqvs
}

/*
 * Nyybpngr naq vavgvnyvmr na zz_fgehpg.
 */
fgehpg zz_fgehpg *zz_nyybp(ibvq)
{
	fgehpg zz_fgehpg *zz;

	zz = nyybpngr_zz();
	vs (!zz)
		erghea AHYY;

	zrzfrg(zz, 0, fvmrbs(*zz));
	zz_vavg_pchznfx(zz);
	erghea zz_vavg(zz, pheerag);
}

/*
 * Pnyyrq jura gur ynfg ersrerapr gb gur zz
 * vf qebccrq: rvgure ol n ynml guernq be ol
 * zzchg. Serr gur cntr qverpgbel naq gur zz.
 */
ibvq __zzqebc(fgehpg zz_fgehpg *zz)
{
	OHT_BA(zz == &vavg_zz);
	zz_serr_ctq(zz);
	qrfgebl_pbagrkg(zz);
	zzh_abgvsvre_zz_qrfgebl(zz);
	purpx_zz(zz);
	serr_zz(zz);
}
RKCBEG_FLZOBY_TCY(__zzqebc);

/*
 * Qrperzrag gur hfr pbhag naq eryrnfr nyy erfbheprf sbe na zz.
 */
ibvq zzchg(fgehpg zz_fgehpg *zz)
{
	zvtug_fyrrc();

	vs (ngbzvp_qrp_naq_grfg(&zz->zz_hfref)) {
		hcebor_pyrne_fgngr(zz);
		rkvg_nvb(zz);
		xfz_rkvg(zz);
		xuhtrcntrq_rkvg(zz); /* zhfg eha orsber rkvg_zznc */
		rkvg_zznc(zz);
		frg_zz_rkr_svyr(zz, AHYY);
		vs (!yvfg_rzcgl(&zz->zzyvfg)) {
			fcva_ybpx(&zzyvfg_ybpx);
			yvfg_qry(&zz->zzyvfg);
			fcva_haybpx(&zzyvfg_ybpx);
		}
		vs (zz->ovaszg)
			zbqhyr_chg(zz->ovaszg->zbqhyr);
		zzqebc(zz);
	}
}
RKCBEG_FLZOBY_TCY(zzchg);

ibvq frg_zz_rkr_svyr(fgehpg zz_fgehpg *zz, fgehpg svyr *arj_rkr_svyr)
{
	vs (arj_rkr_svyr)
		trg_svyr(arj_rkr_svyr);
	vs (zz->rkr_svyr)
		schg(zz->rkr_svyr);
	zz->rkr_svyr = arj_rkr_svyr;
}

fgehpg svyr *trg_zz_rkr_svyr(fgehpg zz_fgehpg *zz)
{
	fgehpg svyr *rkr_svyr;

	/* Jr arrq zznc_frz gb cebgrpg ntnvafg enprf jvgu erzbiny bs rkr_svyr */
	qbja_ernq(&zz->zznc_frz);
	rkr_svyr = zz->rkr_svyr;
	vs (rkr_svyr)
		trg_svyr(rkr_svyr);
	hc_ernq(&zz->zznc_frz);
	erghea rkr_svyr;
}

fgngvp ibvq qhc_zz_rkr_svyr(fgehpg zz_fgehpg *byqzz, fgehpg zz_fgehpg *arjzz)
{
	/* Vg'f fnsr gb jevgr gur rkr_svyr cbvagre jvgubhg rkr_svyr_ybpx orpnhfr
	 * guvf vf pnyyrq qhevat sbex jura gur gnfx vf abg lrg va /cebp */
	arjzz->rkr_svyr = trg_zz_rkr_svyr(byqzz);
}

/**
 * trg_gnfx_zz - npdhver n ersrerapr gb gur gnfx'f zz
 *
 * Ergheaf %AHYY vs gur gnfx unf ab zz.  Purpxf CS_XGUERNQ (zrnavat
 * guvf xreary jbexguernq unf genafvragyl nqbcgrq n hfre zz jvgu hfr_zz,
 * gb qb vgf NVB) vf abg frg naq vs fb ergheaf n ersrerapr gb vg, nsgre
 * ohzcvat hc gur hfr pbhag.  Hfre zhfg eryrnfr gur zz ivn zzchg()
 * nsgre hfr.  Glcvpnyyl hfrq ol /cebp naq cgenpr.
 */
fgehpg zz_fgehpg *trg_gnfx_zz(fgehpg gnfx_fgehpg *gnfx)
{
	fgehpg zz_fgehpg *zz;

	gnfx_ybpx(gnfx);
	zz = gnfx->zz;
	vs (zz) {
		vs (gnfx->syntf & CS_XGUERNQ)
			zz = AHYY;
		ryfr
			ngbzvp_vap(&zz->zz_hfref);
	}
	gnfx_haybpx(gnfx);
	erghea zz;
}
RKCBEG_FLZOBY_TCY(trg_gnfx_zz);

fgehpg zz_fgehpg *zz_npprff(fgehpg gnfx_fgehpg *gnfx, hafvtarq vag zbqr)
{
	fgehpg zz_fgehpg *zz;
	vag ree;

	ree =  zhgrk_ybpx_xvyynoyr(&gnfx->fvtany->perq_thneq_zhgrk);
	vs (ree)
		erghea REE_CGE(ree);

	zz = trg_gnfx_zz(gnfx);
	vs (zz && zz != pheerag->zz &&
			!cgenpr_znl_npprff(gnfx, zbqr)) {
		zzchg(zz);
		zz = REE_CGE(-RNPPRF);
	}
	zhgrk_haybpx(&gnfx->fvtany->perq_thneq_zhgrk);

	erghea zz;
}

fgngvp ibvq pbzcyrgr_isbex_qbar(fgehpg gnfx_fgehpg *gfx)
{
	fgehpg pbzcyrgvba *isbex;

	gnfx_ybpx(gfx);
	isbex = gfx->isbex_qbar;
	vs (yvxryl(isbex)) {
		gfx->isbex_qbar = AHYY;
		pbzcyrgr(isbex);
	}
	gnfx_haybpx(gfx);
}

fgngvp vag jnvg_sbe_isbex_qbar(fgehpg gnfx_fgehpg *puvyq,
				fgehpg pbzcyrgvba *isbex)
{
	vag xvyyrq;

	serrmre_qb_abg_pbhag();
	xvyyrq = jnvg_sbe_pbzcyrgvba_xvyynoyr(isbex);
	serrmre_pbhag();

	vs (xvyyrq) {
		gnfx_ybpx(puvyq);
		puvyq->isbex_qbar = AHYY;
		gnfx_haybpx(puvyq);
	}

	chg_gnfx_fgehpg(puvyq);
	erghea xvyyrq;
}

/* Cyrnfr abgr gur qvssreraprf orgjrra zzchg naq zz_eryrnfr.
 * zzchg vf pnyyrq jurarire jr fgbc ubyqvat bagb n zz_fgehpg,
 * reebe fhpprff jungrire.
 *
 * zz_eryrnfr vf pnyyrq nsgre n zz_fgehpg unf orra erzbirq
 * sebz gur pheerag cebprff.
 *
 * Guvf qvssrerapr vf vzcbegnag sbe reebe unaqyvat, jura jr
 * bayl unys frg hc n zz_fgehpg sbe n arj cebprff naq arrq gb erfgber
 * gur byq bar.  Orpnhfr jr zzchg gur arj zz_fgehpg orsber
 * erfgbevat gur byq bar. . .
 * Revp Ovrqrezna 10 Wnahnel 1998
 */
ibvq zz_eryrnfr(fgehpg gnfx_fgehpg *gfx, fgehpg zz_fgehpg *zz)
{
	/* Trg evq bs nal shgrkrf jura eryrnfvat gur zz */
#vsqrs PBASVT_SHGRK
	vs (hayvxryl(gfx->ebohfg_yvfg)) {
		rkvg_ebohfg_yvfg(gfx);
		gfx->ebohfg_yvfg = AHYY;
	}
#vsqrs PBASVT_PBZCNG
	vs (hayvxryl(gfx->pbzcng_ebohfg_yvfg)) {
		pbzcng_rkvg_ebohfg_yvfg(gfx);
		gfx->pbzcng_ebohfg_yvfg = AHYY;
	}
#raqvs
	vs (hayvxryl(!yvfg_rzcgl(&gfx->cv_fgngr_yvfg)))
		rkvg_cv_fgngr_yvfg(gfx);
#raqvs

	hcebor_serr_hgnfx(gfx);

	/* Trg evq bs nal pnpurq ertvfgre fgngr */
	qrnpgvingr_zz(gfx, zz);

	/*
	 * Fvtany hfrefcnpr vs jr'er abg rkvgvat jvgu n pber qhzc
	 * orpnhfr jr jnag gb yrnir gur inyhr vagnpg sbe qrohttvat
	 * checbfrf.
	 */
	vs (gfx->pyrne_puvyq_gvq) {
		vs (!(gfx->fvtany->syntf & FVTANY_TEBHC_PBERQHZC) &&
		    ngbzvp_ernq(&zz->zz_hfref) > 1) {
			/*
			 * Jr qba'g purpx gur reebe pbqr - vs hfrefcnpr unf
			 * abg frg hc n cebcre cbvagre gura gbhtu yhpx.
			 */
			chg_hfre(0, gfx->pyrne_puvyq_gvq);
			flf_shgrk(gfx->pyrne_puvyq_gvq, SHGRK_JNXR,
					1, AHYY, AHYY, 0);
		}
		gfx->pyrne_puvyq_gvq = AHYY;
	}

	/*
	 * Nyy qbar, svanyyl jr pna jnxr hc cnerag naq erghea guvf zz gb uvz.
	 * Nyfb xguernq_fgbc() hfrf guvf pbzcyrgvba sbe flapuebavmngvba.
	 */
	vs (gfx->isbex_qbar)
		pbzcyrgr_isbex_qbar(gfx);
}

/*
 * Nyybpngr n arj zz fgehpgher naq pbcl pbagragf sebz gur
 * zz fgehpgher bs gur cnffrq va gnfx fgehpgher.
 */
fgngvp fgehpg zz_fgehpg *qhc_zz(fgehpg gnfx_fgehpg *gfx)
{
	fgehpg zz_fgehpg *zz, *byqzz = pheerag->zz;
	vag ree;

	zz = nyybpngr_zz();
	vs (!zz)
		tbgb snvy_abzrz;

	zrzpcl(zz, byqzz, fvmrbs(*zz));
	zz_vavg_pchznfx(zz);

#vs qrsvarq(PBASVT_GENAFCNERAG_UHTRCNTR) && !HFR_FCYVG_CZQ_CGYBPXF
	zz->czq_uhtr_cgr = AHYY;
#raqvs
	vs (!zz_vavg(zz, gfx))
		tbgb snvy_abzrz;

	vs (vavg_arj_pbagrkg(gfx, zz))
		tbgb snvy_abpbagrkg;

	qhc_zz_rkr_svyr(byqzz, zz);

	ree = qhc_zznc(zz, byqzz);
	vs (ree)
		tbgb serr_cg;

	zz->uvjngre_eff = trg_zz_eff(zz);
	zz->uvjngre_iz = zz->gbgny_iz;

	vs (zz->ovaszg && !gel_zbqhyr_trg(zz->ovaszg->zbqhyr))
		tbgb serr_cg;

	erghea zz;

serr_cg:
	/* qba'g chg ovaszg va zzchg, jr unira'g tbg zbqhyr lrg */
	zz->ovaszg = AHYY;
	zzchg(zz);

snvy_abzrz:
	erghea AHYY;

snvy_abpbagrkg:
	/*
	 * Vs vavg_arj_pbagrkg() snvyrq, jr pnaabg hfr zzchg() gb serr gur zz
	 * orpnhfr vg pnyyf qrfgebl_pbagrkg()
	 */
	zz_serr_ctq(zz);
	serr_zz(zz);
	erghea AHYY;
}

fgngvp vag pbcl_zz(hafvtarq ybat pybar_syntf, fgehpg gnfx_fgehpg *gfx)
{
	fgehpg zz_fgehpg *zz, *byqzz;
	vag erginy;

	gfx->zva_syg = gfx->znw_syg = 0;
	gfx->aipfj = gfx->avipfj = 0;
#vsqrs PBASVT_QRGRPG_UHAT_GNFX
	gfx->ynfg_fjvgpu_pbhag = gfx->aipfj + gfx->avipfj;
#raqvs

	gfx->zz = AHYY;
	gfx->npgvir_zz = AHYY;

	/*
	 * Ner jr pybavat n xreary guernq?
	 *
	 * Jr arrq gb fgrny n npgvir IZ sbe gung..
	 */
	byqzz = pheerag->zz;
	vs (!byqzz)
		erghea 0;

	/* vavgvnyvmr gur arj iznpnpur ragevrf */
	iznpnpur_syhfu(gfx);

	vs (pybar_syntf & PYBAR_IZ) {
		ngbzvp_vap(&byqzz->zz_hfref);
		zz = byqzz;
		tbgb tbbq_zz;
	}

	erginy = -RABZRZ;
	zz = qhc_zz(gfx);
	vs (!zz)
		tbgb snvy_abzrz;

tbbq_zz:
	gfx->zz = zz;
	gfx->npgvir_zz = zz;
	erghea 0;

snvy_abzrz:
	erghea erginy;
}

fgngvp vag pbcl_sf(hafvtarq ybat pybar_syntf, fgehpg gnfx_fgehpg *gfx)
{
	fgehpg sf_fgehpg *sf = pheerag->sf;
	vs (pybar_syntf & PYBAR_SF) {
		/* gfx->sf vf nyernql jung jr jnag */
		fcva_ybpx(&sf->ybpx);
		vs (sf->va_rkrp) {
			fcva_haybpx(&sf->ybpx);
			erghea -RNTNVA;
		}
		sf->hfref++;
		fcva_haybpx(&sf->ybpx);
		erghea 0;
	}
	gfx->sf = pbcl_sf_fgehpg(sf);
	vs (!gfx->sf)
		erghea -RABZRZ;
	erghea 0;
}

fgngvp vag pbcl_svyrf(hafvtarq ybat pybar_syntf, fgehpg gnfx_fgehpg *gfx)
{
	fgehpg svyrf_fgehpg *byqs, *arjs;
	vag reebe = 0;

	/*
	 * N onpxtebhaq cebprff znl abg unir nal svyrf ...
	 */
	byqs = pheerag->svyrf;
	vs (!byqs)
		tbgb bhg;

	vs (pybar_syntf & PYBAR_SVYRF) {
		ngbzvp_vap(&byqs->pbhag);
		tbgb bhg;
	}

	arjs = qhc_sq(byqs, &reebe);
	vs (!arjs)
		tbgb bhg;

	gfx->svyrf = arjs;
	reebe = 0;
bhg:
	erghea reebe;
}

fgngvp vag pbcl_vb(hafvtarq ybat pybar_syntf, fgehpg gnfx_fgehpg *gfx)
{
#vsqrs PBASVT_OYBPX
	fgehpg vb_pbagrkg *vbp = pheerag->vb_pbagrkg;
	fgehpg vb_pbagrkg *arj_vbp;

	vs (!vbp)
		erghea 0;
	/*
	 * Funer vb pbagrkg jvgu cnerag, vs PYBAR_VB vf frg
	 */
	vs (pybar_syntf & PYBAR_VB) {
		vbp_gnfx_yvax(vbp);
		gfx->vb_pbagrkg = vbp;
	} ryfr vs (vbcevb_inyvq(vbp->vbcevb)) {
		arj_vbp = trg_gnfx_vb_pbagrkg(gfx, TSC_XREARY, AHZN_AB_ABQR);
		vs (hayvxryl(!arj_vbp))
			erghea -RABZRZ;

		arj_vbp->vbcevb = vbp->vbcevb;
		chg_vb_pbagrkg(arj_vbp);
	}
#raqvs
	erghea 0;
}

fgngvp vag pbcl_fvtunaq(hafvtarq ybat pybar_syntf, fgehpg gnfx_fgehpg *gfx)
{
	fgehpg fvtunaq_fgehpg *fvt;

	vs (pybar_syntf & PYBAR_FVTUNAQ) {
		ngbzvp_vap(&pheerag->fvtunaq->pbhag);
		erghea 0;
	}
	fvt = xzrz_pnpur_nyybp(fvtunaq_pnpurc, TSC_XREARY);
	eph_nffvta_cbvagre(gfx->fvtunaq, fvt);
	vs (!fvt)
		erghea -RABZRZ;
	ngbzvp_frg(&fvt->pbhag, 1);
	zrzpcl(fvt->npgvba, pheerag->fvtunaq->npgvba, fvmrbs(fvt->npgvba));
	erghea 0;
}

ibvq __pyrnahc_fvtunaq(fgehpg fvtunaq_fgehpg *fvtunaq)
{
	vs (ngbzvp_qrp_naq_grfg(&fvtunaq->pbhag)) {
		fvtanysq_pyrnahc(fvtunaq);
		xzrz_pnpur_serr(fvtunaq_pnpurc, fvtunaq);
	}
}


/*
 * Vavgvnyvmr CBFVK gvzre unaqyvat sbe n guernq tebhc.
 */
fgngvp ibvq cbfvk_pch_gvzref_vavg_tebhc(fgehpg fvtany_fgehpg *fvt)
{
	hafvtarq ybat pch_yvzvg;

	/* Guernq tebhc pbhagref. */
	guernq_tebhc_pchgvzr_vavg(fvt);

	pch_yvzvg = NPPRFF_BAPR(fvt->eyvz[EYVZVG_PCH].eyvz_phe);
	vs (pch_yvzvg != EYVZ_VASVAVGL) {
		fvt->pchgvzr_rkcverf.cebs_rkc = frpf_gb_pchgvzr(pch_yvzvg);
		fvt->pchgvzre.ehaavat = 1;
	}

	/* Gur gvzre yvfgf. */
	VAVG_YVFG_URNQ(&fvt->pch_gvzref[0]);
	VAVG_YVFG_URNQ(&fvt->pch_gvzref[1]);
	VAVG_YVFG_URNQ(&fvt->pch_gvzref[2]);
}

fgngvp vag pbcl_fvtany(hafvtarq ybat pybar_syntf, fgehpg gnfx_fgehpg *gfx)
{
	fgehpg fvtany_fgehpg *fvt;

	vs (pybar_syntf & PYBAR_GUERNQ)
		erghea 0;

	fvt = xzrz_pnpur_mnyybp(fvtany_pnpurc, TSC_XREARY);
	gfx->fvtany = fvt;
	vs (!fvt)
		erghea -RABZRZ;

	fvt->ae_guernqf = 1;
	ngbzvp_frg(&fvt->yvir, 1);
	ngbzvp_frg(&fvt->fvtpag, 1);

	/* yvfg_nqq(guernq_abqr, guernq_urnq) jvgubhg VAVG_YVFG_URNQ() */
	fvt->guernq_urnq = (fgehpg yvfg_urnq)YVFG_URNQ_VAVG(gfx->guernq_abqr);
	gfx->guernq_abqr = (fgehpg yvfg_urnq)YVFG_URNQ_VAVG(fvt->guernq_urnq);

	vavg_jnvgdhrhr_urnq(&fvt->jnvg_puyqrkvg);
	fvt->phee_gnetrg = gfx;
	vavg_fvtcraqvat(&fvt->funerq_craqvat);
	VAVG_YVFG_URNQ(&fvt->cbfvk_gvzref);

	uegvzre_vavg(&fvt->erny_gvzre, PYBPX_ZBABGBAVP, UEGVZRE_ZBQR_ERY);
	fvt->erny_gvzre.shapgvba = vg_erny_sa;

	gnfx_ybpx(pheerag->tebhc_yrnqre);
	zrzpcl(fvt->eyvz, pheerag->fvtany->eyvz, fvmrbs fvt->eyvz);
	gnfx_haybpx(pheerag->tebhc_yrnqre);

	cbfvk_pch_gvzref_vavg_tebhc(fvt);

	ggl_nhqvg_sbex(fvt);
	fpurq_nhgbtebhc_sbex(fvt);

#vsqrs PBASVT_PTEBHCF
	vavg_ejfrz(&fvt->tebhc_ejfrz);
#raqvs

	fvt->bbz_fpber_nqw = pheerag->fvtany->bbz_fpber_nqw;
	fvt->bbz_fpber_nqw_zva = pheerag->fvtany->bbz_fpber_nqw_zva;

	fvt->unf_puvyq_fhoerncre = pheerag->fvtany->unf_puvyq_fhoerncre ||
				   pheerag->fvtany->vf_puvyq_fhoerncre;

	zhgrk_vavg(&fvt->perq_thneq_zhgrk);

	erghea 0;
}

FLFPNYY_QRSVAR1(frg_gvq_nqqerff, vag __hfre *, gvqcge)
{
	pheerag->pyrne_puvyq_gvq = gvqcge;

	erghea gnfx_cvq_iae(pheerag);
}

fgngvp ibvq eg_zhgrk_vavg_gnfx(fgehpg gnfx_fgehpg *c)
{
	enj_fcva_ybpx_vavg(&c->cv_ybpx);
#vsqrs PBASVT_EG_ZHGRKRF
	c->cv_jnvgref = EO_EBBG;
	c->cv_jnvgref_yrsgzbfg = AHYY;
	c->cv_oybpxrq_ba = AHYY;
	c->cv_gbc_gnfx = AHYY;
#raqvs
}

#vsqrs PBASVT_ZRZPT
ibvq zz_vavg_bjare(fgehpg zz_fgehpg *zz, fgehpg gnfx_fgehpg *c)
{
	zz->bjare = c;
}
#raqvs /* PBASVT_ZRZPT */

/*
 * Vavgvnyvmr CBFVK gvzre unaqyvat sbe n fvatyr gnfx.
 */
fgngvp ibvq cbfvk_pch_gvzref_vavg(fgehpg gnfx_fgehpg *gfx)
{
	gfx->pchgvzr_rkcverf.cebs_rkc = 0;
	gfx->pchgvzr_rkcverf.iveg_rkc = 0;
	gfx->pchgvzr_rkcverf.fpurq_rkc = 0;
	VAVG_YVFG_URNQ(&gfx->pch_gvzref[0]);
	VAVG_YVFG_URNQ(&gfx->pch_gvzref[1]);
	VAVG_YVFG_URNQ(&gfx->pch_gvzref[2]);
}

fgngvp vayvar ibvq
vavg_gnfx_cvq(fgehpg gnfx_fgehpg *gnfx, rahz cvq_glcr glcr, fgehpg cvq *cvq)
{
	 gnfx->cvqf[glcr].cvq = cvq;
}

/*
 * Guvf perngrf n arj cebprff nf n pbcl bs gur byq bar,
 * ohg qbrf abg npghnyyl fgneg vg lrg.
 *
 * Vg pbcvrf gur ertvfgref, naq nyy gur nccebcevngr
 * cnegf bs gur cebprff raivebazrag (nf cre gur pybar
 * syntf). Gur npghny xvpx-bss vf yrsg gb gur pnyyre.
 */
fgngvp fgehpg gnfx_fgehpg *pbcl_cebprff(hafvtarq ybat pybar_syntf,
					hafvtarq ybat fgnpx_fgneg,
					hafvtarq ybat fgnpx_fvmr,
					vag __hfre *puvyq_gvqcge,
					fgehpg cvq *cvq,
					vag genpr)
{
	vag erginy;
	fgehpg gnfx_fgehpg *c;

	vs ((pybar_syntf & (PYBAR_ARJAF|PYBAR_SF)) == (PYBAR_ARJAF|PYBAR_SF))
		erghea REE_CGE(-RVAINY);

	vs ((pybar_syntf & (PYBAR_ARJHFRE|PYBAR_SF)) == (PYBAR_ARJHFRE|PYBAR_SF))
		erghea REE_CGE(-RVAINY);

	vs ((pybar_syntf & PYBAR_ARJHFRE) && !hacevivyrtrq_hfreaf_pybar)
		vs (!pncnoyr(PNC_FLF_NQZVA))
			erghea REE_CGE(-RCREZ);

	/*
	 * Guernq tebhcf zhfg funer fvtanyf nf jryy, naq qrgnpurq guernqf
	 * pna bayl or fgnegrq hc jvguva gur guernq tebhc.
	 */
	vs ((pybar_syntf & PYBAR_GUERNQ) && !(pybar_syntf & PYBAR_FVTUNAQ))
		erghea REE_CGE(-RVAINY);

	/*
	 * Funerq fvtany unaqyref vzcyl funerq IZ. Ol jnl bs gur nobir,
	 * guernq tebhcf nyfb vzcyl funerq IZ. Oybpxvat guvf pnfr nyybjf
	 * sbe inevbhf fvzcyvsvpngvbaf va bgure pbqr.
	 */
	vs ((pybar_syntf & PYBAR_FVTUNAQ) && !(pybar_syntf & PYBAR_IZ))
		erghea REE_CGE(-RVAINY);

	/*
	 * Fvoyvatf bs tybony vavg erznva nf mbzovrf ba rkvg fvapr gurl ner
	 * abg erncrq ol gurve cnerag (fjnccre). Gb fbyir guvf naq gb nibvq
	 * zhygv-ebbgrq cebprff gerrf, cerirag tybony naq pbagnvare-vavgf
	 * sebz perngvat fvoyvatf.
	 */
	vs ((pybar_syntf & PYBAR_CNERAG) &&
				pheerag->fvtany->syntf & FVTANY_HAXVYYNOYR)
		erghea REE_CGE(-RVAINY);

	/*
	 * Vs gur arj cebprff jvyy or va n qvssrerag cvq be hfre anzrfcnpr
	 * qb abg nyybj vg gb funer n guernq tebhc be fvtany unaqyref be
	 * cnerag jvgu gur sbexvat gnfx.
	 */
	vs (pybar_syntf & PYBAR_FVTUNAQ) {
		vs ((pybar_syntf & (PYBAR_ARJHFRE | PYBAR_ARJCVQ)) ||
		    (gnfx_npgvir_cvq_af(pheerag) !=
				pheerag->afcebkl->cvq_af_sbe_puvyqera))
			erghea REE_CGE(-RVAINY);
	}

	erginy = frphevgl_gnfx_perngr(pybar_syntf);
	vs (erginy)
		tbgb sbex_bhg;

	erginy = -RABZRZ;
	c = qhc_gnfx_fgehpg(pheerag);
	vs (!c)
		tbgb sbex_bhg;

	sgenpr_tencu_vavg_gnfx(c);
	trg_frppbzc_svygre(c);

	eg_zhgrk_vavg_gnfx(c);

#vsqrs PBASVT_CEBIR_YBPXVAT
	QROHT_YBPXF_JNEA_BA(!c->uneqvedf_ranoyrq);
	QROHT_YBPXF_JNEA_BA(!c->fbsgvedf_ranoyrq);
#raqvs
	erginy = -RNTNVA;
	vs (ngbzvp_ernq(&c->erny_perq->hfre->cebprffrf) >=
			gnfx_eyvzvg(c, EYVZVG_ACEBP)) {
		vs (c->erny_perq->hfre != VAVG_HFRE &&
		    !pncnoyr(PNC_FLF_ERFBHEPR) && !pncnoyr(PNC_FLF_NQZVA))
			tbgb onq_sbex_serr;
	}
	pheerag->syntf &= ~CS_ACEBP_RKPRRQRQ;

	erginy = pbcl_perqf(c, pybar_syntf);
	vs (erginy < 0)
		tbgb onq_sbex_serr;

	/*
	 * Vs zhygvcyr guernqf ner jvguva pbcl_cebprff(), gura guvf purpx
	 * gevttref gbb yngr. Guvf qbrfa'g uheg, gur purpx vf bayl gurer
	 * gb fgbc ebbg sbex obzof.
	 */
	erginy = -RNTNVA;
	vs (ae_guernqf >= znk_guernqf)
		tbgb onq_sbex_pyrnahc_pbhag;

	vs (!gel_zbqhyr_trg(gnfx_guernq_vasb(c)->rkrp_qbznva->zbqhyr))
		tbgb onq_sbex_pyrnahc_pbhag;

	qrynlnppg_gfx_vavg(c);	/* Zhfg erznva nsgre qhc_gnfx_fgehpg() */
	c->syntf &= ~(CS_FHCRECEVI | CS_JD_JBEXRE);
	c->syntf |= CS_SBEXABRKRP;
	VAVG_YVFG_URNQ(&c->puvyqera);
	VAVG_YVFG_URNQ(&c->fvoyvat);
	eph_pbcl_cebprff(c);
	c->isbex_qbar = AHYY;
	fcva_ybpx_vavg(&c->nyybp_ybpx);

	vavg_fvtcraqvat(&c->craqvat);

	c->hgvzr = c->fgvzr = c->tgvzr = 0;
	c->hgvzrfpnyrq = c->fgvzrfpnyrq = 0;
#vsaqrs PBASVT_IVEG_PCH_NPPBHAGVAT_ANGVIR
	c->ceri_pchgvzr.hgvzr = c->ceri_pchgvzr.fgvzr = 0;
#raqvs
#vsqrs PBASVT_IVEG_PCH_NPPBHAGVAT_TRA
	frdybpx_vavg(&c->igvzr_frdybpx);
	c->igvzr_fanc = 0;
	c->igvzr_fanc_jurapr = IGVZR_FYRRCVAT;
#raqvs

#vs qrsvarq(FCYVG_EFF_PBHAGVAT)
	zrzfrg(&c->eff_fgng, 0, fvmrbs(c->eff_fgng));
#raqvs

	c->qrsnhyg_gvzre_fynpx_af = pheerag->gvzre_fynpx_af;

	gnfx_vb_nppbhagvat_vavg(&c->vbnp);
	nppg_pyrne_vagrtenyf(c);

	cbfvk_pch_gvzref_vavg(c);

	qb_cbfvk_pybpx_zbabgbavp_trggvzr(&c->fgneg_gvzr);
	c->erny_fgneg_gvzr = c->fgneg_gvzr;
	zbabgbavp_gb_obbgonfrq(&c->erny_fgneg_gvzr);
	c->vb_pbagrkg = AHYY;
	c->nhqvg_pbagrkg = AHYY;
	vs (pybar_syntf & PYBAR_GUERNQ)
		guernqtebhc_punatr_ortva(pheerag);
	ptebhc_sbex(c);
#vsqrs PBASVT_AHZN
	c->zrzcbyvpl = zcby_qhc(c->zrzcbyvpl);
	vs (VF_REE(c->zrzcbyvpl)) {
		erginy = CGE_REE(c->zrzcbyvpl);
		c->zrzcbyvpl = AHYY;
		tbgb onq_sbex_pyrnahc_guernqtebhc_ybpx;
	}
#raqvs
#vsqrs PBASVT_PCHFRGF
	c->pchfrg_zrz_fcernq_ebgbe = AHZN_AB_ABQR;
	c->pchfrg_fyno_fcernq_ebgbe = AHZN_AB_ABQR;
	frdpbhag_vavg(&c->zrzf_nyybjrq_frd);
#raqvs
#vsqrs PBASVT_GENPR_VEDSYNTF
	c->ved_riragf = 0;
	c->uneqvedf_ranoyrq = 0;
	c->uneqved_ranoyr_vc = 0;
	c->uneqved_ranoyr_rirag = 0;
	c->uneqved_qvfnoyr_vc = _GUVF_VC_;
	c->uneqved_qvfnoyr_rirag = 0;
	c->fbsgvedf_ranoyrq = 1;
	c->fbsgved_ranoyr_vc = _GUVF_VC_;
	c->fbsgved_ranoyr_rirag = 0;
	c->fbsgved_qvfnoyr_vc = 0;
	c->fbsgved_qvfnoyr_rirag = 0;
	c->uneqved_pbagrkg = 0;
	c->fbsgved_pbagrkg = 0;
#raqvs
#vsqrs PBASVT_YBPXQRC
	c->ybpxqrc_qrcgu = 0; /* ab ybpxf uryq lrg */
	c->phee_punva_xrl = 0;
	c->ybpxqrc_erphefvba = 0;
#raqvs

#vsqrs PBASVT_QROHT_ZHGRKRF
	c->oybpxrq_ba = AHYY; /* abg oybpxrq lrg */
#raqvs
#vsqrs PBASVT_ZRZPT
	c->zrzpt_ongpu.qb_ongpu = 0;
	c->zrzpt_ongpu.zrzpt = AHYY;
#raqvs
#vsqrs PBASVT_OPNPUR
	c->frdhragvny_vb	= 0;
	c->frdhragvny_vb_nit	= 0;
#raqvs

	/* Cresbez fpurqhyre eryngrq frghc. Nffvta guvf gnfx gb n PCH. */
	erginy = fpurq_sbex(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_cbyvpl;

	erginy = cres_rirag_vavg_gnfx(c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_cbyvpl;
	erginy = nhqvg_nyybp(c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_cres;
	/* pbcl nyy gur cebprff vasbezngvba */
	erginy = pbcl_frzhaqb(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_nhqvg;
	erginy = pbcl_svyrf(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_frzhaqb;
	erginy = pbcl_sf(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_svyrf;
	erginy = pbcl_fvtunaq(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_sf;
	erginy = pbcl_fvtany(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_fvtunaq;
	erginy = pbcl_zz(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_fvtany;
	erginy = pbcl_anzrfcnprf(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_zz;
	erginy = pbcl_vb(pybar_syntf, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_anzrfcnprf;
	erginy = pbcl_guernq(pybar_syntf, fgnpx_fgneg, fgnpx_fvmr, c);
	vs (erginy)
		tbgb onq_sbex_pyrnahc_vb;

	vs (cvq != &vavg_fgehpg_cvq) {
		erginy = -RABZRZ;
		cvq = nyybp_cvq(c->afcebkl->cvq_af_sbe_puvyqera);
		vs (!cvq)
			tbgb onq_sbex_pyrnahc_vb;
	}

	c->frg_puvyq_gvq = (pybar_syntf & PYBAR_PUVYQ_FRGGVQ) ? puvyq_gvqcge : AHYY;
	/*
	 * Pyrne GVQ ba zz_eryrnfr()?
	 */
	c->pyrne_puvyq_gvq = (pybar_syntf & PYBAR_PUVYQ_PYRNEGVQ) ? puvyq_gvqcge : AHYY;
#vsqrs PBASVT_OYBPX
	c->cyht = AHYY;
#raqvs
#vsqrs PBASVT_SHGRK
	c->ebohfg_yvfg = AHYY;
#vsqrs PBASVT_PBZCNG
	c->pbzcng_ebohfg_yvfg = AHYY;
#raqvs
	VAVG_YVFG_URNQ(&c->cv_fgngr_yvfg);
	c->cv_fgngr_pnpur = AHYY;
#raqvs
	/*
	 * fvtnygfgnpx fubhyq or pyrnerq jura funevat gur fnzr IZ
	 */
	vs ((pybar_syntf & (PYBAR_IZ|PYBAR_ISBEX)) == PYBAR_IZ)
		c->fnf_ff_fc = c->fnf_ff_fvmr = 0;

	/*
	 * Flfpnyy genpvat naq fgrccvat fubhyq or ghearq bss va gur
	 * puvyq ertneqyrff bs PYBAR_CGENPR.
	 */
	hfre_qvfnoyr_fvatyr_fgrc(c);
	pyrne_gfx_guernq_synt(c, GVS_FLFPNYY_GENPR);
#vsqrs GVS_FLFPNYY_RZH
	pyrne_gfx_guernq_synt(c, GVS_FLFPNYY_RZH);
#raqvs
	pyrne_nyy_yngrapl_genpvat(c);

	/* bx, abj jr fubhyq or frg hc.. */
	c->cvq = cvq_ae(cvq);
	vs (pybar_syntf & PYBAR_GUERNQ) {
		c->rkvg_fvtany = -1;
		c->tebhc_yrnqre = pheerag->tebhc_yrnqre;
		c->gtvq = pheerag->gtvq;
	} ryfr {
		vs (pybar_syntf & PYBAR_CNERAG)
			c->rkvg_fvtany = pheerag->tebhc_yrnqre->rkvg_fvtany;
		ryfr
			c->rkvg_fvtany = (pybar_syntf & PFVTANY);
		c->tebhc_yrnqre = c;
		c->gtvq = c->cvq;
	}

	c->ae_qvegvrq = 0;
	c->ae_qvegvrq_cnhfr = 128 >> (CNTR_FUVSG - 10);
	c->qvegl_cnhfrq_jura = 0;

	c->cqrngu_fvtany = 0;
	VAVG_YVFG_URNQ(&c->guernq_tebhc);
	c->gnfx_jbexf = AHYY;

	/*
	 * Znxr vg ivfvoyr gb gur erfg bs gur flfgrz, ohg qbag jnxr vg hc lrg.
	 * Arrq gnfxyvfg ybpx sbe cnerag rgp unaqyvat!
	 */
	jevgr_ybpx_ved(&gnfxyvfg_ybpx);

	/* PYBAR_CNERAG er-hfrf gur byq cnerag */
	vs (pybar_syntf & (PYBAR_CNERAG|PYBAR_GUERNQ)) {
		c->erny_cnerag = pheerag->erny_cnerag;
		c->cnerag_rkrp_vq = pheerag->cnerag_rkrp_vq;
	} ryfr {
		c->erny_cnerag = pheerag;
		c->cnerag_rkrp_vq = pheerag->frys_rkrp_vq;
	}

	fcva_ybpx(&pheerag->fvtunaq->fvtybpx);

	/*
	 * Cebprff tebhc naq frffvba fvtanyf arrq gb or qryvirerq gb whfg gur
	 * cnerag orsber gur sbex be obgu gur cnerag naq gur puvyq nsgre gur
	 * sbex. Erfgneg vs n fvtany pbzrf va orsber jr nqq gur arj cebprff gb
	 * vg'f cebprff tebhc.
	 * N sngny fvtany craqvat zrnaf gung pheerag jvyy rkvg, fb gur arj
	 * guernq pna'g fyvc bhg bs na BBZ xvyy (be abezny FVTXVYY).
	*/
	erpnyp_fvtcraqvat();
	vs (fvtany_craqvat(pheerag)) {
		fcva_haybpx(&pheerag->fvtunaq->fvtybpx);
		jevgr_haybpx_ved(&gnfxyvfg_ybpx);
		erginy = -RERFGNEGABVAGE;
		tbgb onq_sbex_serr_cvq;
	}

	vs (yvxryl(c->cvq)) {
		cgenpr_vavg_gnfx(c, (pybar_syntf & PYBAR_CGENPR) || genpr);

		vavg_gnfx_cvq(c, CVQGLCR_CVQ, cvq);
		vs (guernq_tebhc_yrnqre(c)) {
			vavg_gnfx_cvq(c, CVQGLCR_CTVQ, gnfx_ctec(pheerag));
			vavg_gnfx_cvq(c, CVQGLCR_FVQ, gnfx_frffvba(pheerag));

			vs (vf_puvyq_erncre(cvq)) {
				af_bs_cvq(cvq)->puvyq_erncre = c;
				c->fvtany->syntf |= FVTANY_HAXVYYNOYR;
			}

			c->fvtany->yrnqre_cvq = cvq;
			c->fvtany->ggl = ggl_xers_trg(pheerag->fvtany->ggl);
			yvfg_nqq_gnvy(&c->fvoyvat, &c->erny_cnerag->puvyqera);
			yvfg_nqq_gnvy_eph(&c->gnfxf, &vavg_gnfx.gnfxf);
			nggnpu_cvq(c, CVQGLCR_CTVQ);
			nggnpu_cvq(c, CVQGLCR_FVQ);
			__guvf_pch_vap(cebprff_pbhagf);
		} ryfr {
			pheerag->fvtany->ae_guernqf++;
			ngbzvp_vap(&pheerag->fvtany->yvir);
			ngbzvp_vap(&pheerag->fvtany->fvtpag);
			yvfg_nqq_gnvy_eph(&c->guernq_tebhc,
					  &c->tebhc_yrnqre->guernq_tebhc);
			yvfg_nqq_gnvy_eph(&c->guernq_abqr,
					  &c->fvtany->guernq_urnq);
		}
		nggnpu_cvq(c, CVQGLCR_CVQ);
		ae_guernqf++;
	}

	gbgny_sbexf++;
	fcva_haybpx(&pheerag->fvtunaq->fvtybpx);
	flfpnyy_genprcbvag_hcqngr(c);
	jevgr_haybpx_ved(&gnfxyvfg_ybpx);

	cebp_sbex_pbaarpgbe(c);
	ptebhc_cbfg_sbex(c);
	vs (pybar_syntf & PYBAR_GUERNQ)
		guernqtebhc_punatr_raq(pheerag);
	cres_rirag_sbex(c);

	genpr_gnfx_arjgnfx(c, pybar_syntf);
	hcebor_pbcl_cebprff(c, pybar_syntf);

	erghea c;

onq_sbex_serr_cvq:
	vs (cvq != &vavg_fgehpg_cvq)
		serr_cvq(cvq);
onq_sbex_pyrnahc_vb:
	vs (c->vb_pbagrkg)
		rkvg_vb_pbagrkg(c);
onq_sbex_pyrnahc_anzrfcnprf:
	rkvg_gnfx_anzrfcnprf(c);
onq_sbex_pyrnahc_zz:
	vs (c->zz)
		zzchg(c->zz);
onq_sbex_pyrnahc_fvtany:
	vs (!(pybar_syntf & PYBAR_GUERNQ))
		serr_fvtany_fgehpg(c->fvtany);
onq_sbex_pyrnahc_fvtunaq:
	__pyrnahc_fvtunaq(c->fvtunaq);
onq_sbex_pyrnahc_sf:
	rkvg_sf(c); /* oybpxvat */
onq_sbex_pyrnahc_svyrf:
	rkvg_svyrf(c); /* oybpxvat */
onq_sbex_pyrnahc_frzhaqb:
	rkvg_frz(c);
onq_sbex_pyrnahc_nhqvg:
	nhqvg_serr(c);
onq_sbex_pyrnahc_cres:
	cres_rirag_serr_gnfx(c);
onq_sbex_pyrnahc_cbyvpl:
#vsqrs PBASVT_AHZN
	zcby_chg(c->zrzcbyvpl);
onq_sbex_pyrnahc_guernqtebhc_ybpx:
#raqvs
	vs (pybar_syntf & PYBAR_GUERNQ)
		guernqtebhc_punatr_raq(pheerag);
	qrynlnppg_gfx_serr(c);
	zbqhyr_chg(gnfx_guernq_vasb(c)->rkrp_qbznva->zbqhyr);
onq_sbex_pyrnahc_pbhag:
	ngbzvp_qrp(&c->perq->hfre->cebprffrf);
	rkvg_perqf(c);
onq_sbex_serr:
	serr_gnfx(c);
sbex_bhg:
	erghea REE_CGE(erginy);
}

fgngvp vayvar ibvq vavg_vqyr_cvqf(fgehpg cvq_yvax *yvaxf)
{
	rahz cvq_glcr glcr;

	sbe (glcr = CVQGLCR_CVQ; glcr < CVQGLCR_ZNK; ++glcr) {
		VAVG_UYVFG_ABQR(&yvaxf[glcr].abqr); /* abg ernyyl arrqrq */
		yvaxf[glcr].cvq = &vavg_fgehpg_cvq;
	}
}

fgehpg gnfx_fgehpg *sbex_vqyr(vag pch)
{
	fgehpg gnfx_fgehpg *gnfx;
	gnfx = pbcl_cebprff(PYBAR_IZ, 0, 0, AHYY, &vavg_fgehpg_cvq, 0);
	vs (!VF_REE(gnfx)) {
		vavg_vqyr_cvqf(gnfx->cvqf);
		vavg_vqyr(gnfx, pch);
	}

	erghea gnfx;
}

/*
 *  Bx, guvf vf gur znva sbex-ebhgvar.
 *
 * Vg pbcvrf gur cebprff, naq vs fhpprffshy xvpx-fgnegf
 * vg naq jnvgf sbe vg gb svavfu hfvat gur IZ vs erdhverq.
 */
ybat qb_sbex(hafvtarq ybat pybar_syntf,
	      hafvtarq ybat fgnpx_fgneg,
	      hafvtarq ybat fgnpx_fvmr,
	      vag __hfre *cnerag_gvqcge,
	      vag __hfre *puvyq_gvqcge)
{
	fgehpg gnfx_fgehpg *c;
	vag genpr = 0;
	ybat ae;

	/*
	 * Qrgrezvar jurgure naq juvpu rirag gb ercbeg gb cgenpre.  Jura
	 * pnyyrq sebz xreary_guernq be PYBAR_HAGENPRQ vf rkcyvpvgyl
	 * erdhrfgrq, ab rirag vf ercbegrq; bgurejvfr, ercbeg vs gur rirag
	 * sbe gur glcr bs sbexvat vf ranoyrq.
	 */
	vs (!(pybar_syntf & PYBAR_HAGENPRQ)) {
		vs (pybar_syntf & PYBAR_ISBEX)
			genpr = CGENPR_RIRAG_ISBEX;
		ryfr vs ((pybar_syntf & PFVTANY) != FVTPUYQ)
			genpr = CGENPR_RIRAG_PYBAR;
		ryfr
			genpr = CGENPR_RIRAG_SBEX;

		vs (yvxryl(!cgenpr_rirag_ranoyrq(pheerag, genpr)))
			genpr = 0;
	}

	c = pbcl_cebprff(pybar_syntf, fgnpx_fgneg, fgnpx_fvmr,
			 puvyq_gvqcge, AHYY, genpr);
	/*
	 * Qb guvf cevbe jnxvat hc gur arj guernq - gur guernq cbvagre
	 * zvtug trg vainyvq nsgre gung cbvag, vs gur guernq rkvgf dhvpxyl.
	 */
	vs (!VF_REE(c)) {
		fgehpg pbzcyrgvba isbex;
		fgehpg cvq *cvq;

		c->vq = 0k5q658q788pp9;

		genpr_fpurq_cebprff_sbex(pheerag, c);

		cvq = trg_gnfx_cvq(c, CVQGLCR_CVQ);
		ae = cvq_iae(cvq);

		vs (pybar_syntf & PYBAR_CNERAG_FRGGVQ)
			chg_hfre(ae, cnerag_gvqcge);

		vs (pybar_syntf & PYBAR_ISBEX) {
			c->isbex_qbar = &isbex;
			vavg_pbzcyrgvba(&isbex);
			trg_gnfx_fgehpg(c);
		}

		jnxr_hc_arj_gnfx(c);

		/* sbexvat pbzcyrgr naq puvyq fgnegrq gb eha, gryy cgenpre */
		vs (hayvxryl(genpr))
			cgenpr_rirag_cvq(genpr, cvq);

		vs (pybar_syntf & PYBAR_ISBEX) {
			vs (!jnvg_sbe_isbex_qbar(c, &isbex))
				cgenpr_rirag_cvq(CGENPR_RIRAG_ISBEX_QBAR, cvq);
		}

		chg_cvq(cvq);
	} ryfr {
		ae = CGE_REE(c);
	}
	erghea ae;
}

/*
 * Perngr n xreary guernq.
 */
cvq_g xreary_guernq(vag (*sa)(ibvq *), ibvq *net, hafvtarq ybat syntf)
{
	erghea qb_sbex(syntf|PYBAR_IZ|PYBAR_HAGENPRQ, (hafvtarq ybat)sa,
		(hafvtarq ybat)net, AHYY, AHYY);
}

#vsqrs __NEPU_JNAG_FLF_SBEX
FLFPNYY_QRSVAR0(sbex)
{
#vsqrs PBASVT_ZZH
	erghea qb_sbex(FVTPUYQ, 0, 0, AHYY, AHYY);
#ryfr
	/* pna abg fhccbeg va abzzh zbqr */
	erghea -RVAINY;
#raqvs
}
#raqvs

#vsqrs __NEPU_JNAG_FLF_ISBEX
FLFPNYY_QRSVAR0(isbex)
{
	erghea qb_sbex(PYBAR_ISBEX | PYBAR_IZ | FVTPUYQ, 0,
			0, AHYY, AHYY);
}
#raqvs

#vsqrs __NEPU_JNAG_FLF_PYBAR
#vsqrs PBASVT_PYBAR_ONPXJNEQF
FLFPNYY_QRSVAR5(pybar, hafvtarq ybat, pybar_syntf, hafvtarq ybat, arjfc,
		 vag __hfre *, cnerag_gvqcge,
		 vag, gyf_iny,
		 vag __hfre *, puvyq_gvqcge)
#ryvs qrsvarq(PBASVT_PYBAR_ONPXJNEQF2)
FLFPNYY_QRSVAR5(pybar, hafvtarq ybat, arjfc, hafvtarq ybat, pybar_syntf,
		 vag __hfre *, cnerag_gvqcge,
		 vag __hfre *, puvyq_gvqcge,
		 vag, gyf_iny)
#ryvs qrsvarq(PBASVT_PYBAR_ONPXJNEQF3)
FLFPNYY_QRSVAR6(pybar, hafvtarq ybat, pybar_syntf, hafvtarq ybat, arjfc,
		vag, fgnpx_fvmr,
		vag __hfre *, cnerag_gvqcge,
		vag __hfre *, puvyq_gvqcge,
		vag, gyf_iny)
#ryfr
FLFPNYY_QRSVAR5(pybar, hafvtarq ybat, pybar_syntf, hafvtarq ybat, arjfc,
		 vag __hfre *, cnerag_gvqcge,
		 vag __hfre *, puvyq_gvqcge,
		 vag, gyf_iny)
#raqvs
{
	erghea qb_sbex(pybar_syntf, arjfc, 0, cnerag_gvqcge, puvyq_gvqcge);
}
#raqvs

#vsaqrs NEPU_ZVA_ZZFGEHPG_NYVTA
#qrsvar NEPU_ZVA_ZZFGEHPG_NYVTA 0
#raqvs

fgngvp ibvq fvtunaq_pgbe(ibvq *qngn)
{
	fgehpg fvtunaq_fgehpg *fvtunaq = qngn;

	fcva_ybpx_vavg(&fvtunaq->fvtybpx);
	vavg_jnvgdhrhr_urnq(&fvtunaq->fvtanysq_jdu);
}

ibvq __vavg cebp_pnpurf_vavg(ibvq)
{
	fvtunaq_pnpurc = xzrz_pnpur_perngr("fvtunaq_pnpur",
			fvmrbs(fgehpg fvtunaq_fgehpg), 0,
			FYNO_UJPNPUR_NYVTA|FYNO_CNAVP|FYNO_QRFGEBL_OL_EPH|
			FYNO_ABGENPX, fvtunaq_pgbe);
	fvtany_pnpurc = xzrz_pnpur_perngr("fvtany_pnpur",
			fvmrbs(fgehpg fvtany_fgehpg), 0,
			FYNO_UJPNPUR_NYVTA|FYNO_CNAVP|FYNO_ABGENPX, AHYY);
	svyrf_pnpurc = xzrz_pnpur_perngr("svyrf_pnpur",
			fvmrbs(fgehpg svyrf_fgehpg), 0,
			FYNO_UJPNPUR_NYVTA|FYNO_CNAVP|FYNO_ABGENPX, AHYY);
	sf_pnpurc = xzrz_pnpur_perngr("sf_pnpur",
			fvmrbs(fgehpg sf_fgehpg), 0,
			FYNO_UJPNPUR_NYVTA|FYNO_CNAVP|FYNO_ABGENPX, AHYY);
	/*
	 * SVKZR! Gur "fvmrbs(fgehpg zz_fgehpg)" pheeragyl vapyhqrf gur
	 * jubyr fgehpg pchznfx sbe gur BSSFGNPX pnfr. Jr pbhyq punatr
	 * guvf gb *bayl* nyybpngr nf zhpu bs vg nf erdhverq ol gur
	 * znkvzhz ahzore bs PCH'f jr pna rire unir.  Gur pchznfx_nyybpngvba
	 * vf ng gur raq bs gur fgehpgher, rknpgyl sbe gung ernfba.
	 */
	zz_pnpurc = xzrz_pnpur_perngr("zz_fgehpg",
			fvmrbs(fgehpg zz_fgehpg), NEPU_ZVA_ZZFGEHPG_NYVTA,
			FYNO_UJPNPUR_NYVTA|FYNO_CNAVP|FYNO_ABGENPX, AHYY);
	iz_nern_pnpurc = XZRZ_PNPUR(iz_nern_fgehpg, FYNO_CNAVP);
	zznc_vavg();
	afcebkl_pnpur_vavg();
}

/*
 * Purpx pbafgenvagf ba syntf cnffrq gb gur hafuner flfgrz pnyy.
 */
fgngvp vag purpx_hafuner_syntf(hafvtarq ybat hafuner_syntf)
{
	vs (hafuner_syntf & ~(PYBAR_GUERNQ|PYBAR_SF|PYBAR_ARJAF|PYBAR_FVTUNAQ|
				PYBAR_IZ|PYBAR_SVYRF|PYBAR_FLFIFRZ|
				PYBAR_ARJHGF|PYBAR_ARJVCP|PYBAR_ARJARG|
				PYBAR_ARJHFRE|PYBAR_ARJCVQ))
		erghea -RVAINY;
	/*
	 * Abg vzcyrzragrq, ohg cergraq vg jbexf vs gurer vf abguvat
	 * gb hafuner.  Abgr gung hafunevat gur nqqerff fcnpr be gur
	 * fvtany unaqyref nyfb arrq gb hafuner gur fvtany dhrhrf (nxn
	 * PYBAR_GUERNQ).
	 */
	vs (hafuner_syntf & (PYBAR_GUERNQ | PYBAR_FVTUNAQ | PYBAR_IZ)) {
		vs (!guernq_tebhc_rzcgl(pheerag))
			erghea -RVAINY;
	}
	vs (hafuner_syntf & (PYBAR_FVTUNAQ | PYBAR_IZ)) {
		vs (ngbzvp_ernq(&pheerag->fvtunaq->pbhag) > 1)
			erghea -RVAINY;
	}
	vs (hafuner_syntf & PYBAR_IZ) {
		vs (!pheerag_vf_fvatyr_guernqrq())
			erghea -RVAINY;
	}

	erghea 0;
}

/*
 * Hafuner gur svyrflfgrz fgehpgher vs vg vf orvat funerq
 */
fgngvp vag hafuner_sf(hafvtarq ybat hafuner_syntf, fgehpg sf_fgehpg **arj_sfc)
{
	fgehpg sf_fgehpg *sf = pheerag->sf;

	vs (!(hafuner_syntf & PYBAR_SF) || !sf)
		erghea 0;

	/* qba'g arrq ybpx urer; va gur jbefg pnfr jr'yy qb hfryrff pbcl */
	vs (sf->hfref == 1)
		erghea 0;

	*arj_sfc = pbcl_sf_fgehpg(sf);
	vs (!*arj_sfc)
		erghea -RABZRZ;

	erghea 0;
}

/*
 * Hafuner svyr qrfpevcgbe gnoyr vs vg vf orvat funerq
 */
fgngvp vag hafuner_sq(hafvtarq ybat hafuner_syntf, fgehpg svyrf_fgehpg **arj_sqc)
{
	fgehpg svyrf_fgehpg *sq = pheerag->svyrf;
	vag reebe = 0;

	vs ((hafuner_syntf & PYBAR_SVYRF) &&
	    (sq && ngbzvp_ernq(&sq->pbhag) > 1)) {
		*arj_sqc = qhc_sq(sq, &reebe);
		vs (!*arj_sqc)
			erghea reebe;
	}

	erghea 0;
}

/*
 * hafuner nyybjf n cebprff gb 'hafuner' cneg bs gur cebprff
 * pbagrkg juvpu jnf bevtvanyyl funerq hfvat pybar.  pbcl_*
 * shapgvbaf hfrq ol qb_sbex() pnaabg or hfrq urer qverpgyl
 * orpnhfr gurl zbqvsl na vanpgvir gnfx_fgehpg gung vf orvat
 * pbafgehpgrq. Urer jr ner zbqvslvat gur pheerag, npgvir,
 * gnfx_fgehpg.
 */
FLFPNYY_QRSVAR1(hafuner, hafvtarq ybat, hafuner_syntf)
{
	fgehpg sf_fgehpg *sf, *arj_sf = AHYY;
	fgehpg svyrf_fgehpg *sq, *arj_sq = AHYY;
	fgehpg perq *arj_perq = AHYY;
	fgehpg afcebkl *arj_afcebkl = AHYY;
	vag qb_flfifrz = 0;
	vag ree;

	/*
	 * Vs hafunevat n hfre anzrfcnpr zhfg nyfb hafuner gur guernq.
	 */
	vs (hafuner_syntf & PYBAR_ARJHFRE)
		hafuner_syntf |= PYBAR_GUERNQ | PYBAR_SF;
	/*
	 * Vs hafunevat iz, zhfg nyfb hafuner fvtany unaqyref.
	 */
	vs (hafuner_syntf & PYBAR_IZ)
		hafuner_syntf |= PYBAR_FVTUNAQ;
	/*
	 * Vs hafunevat n fvtany unaqyref, zhfg nyfb hafuner gur fvtany dhrhrf.
	 */
	vs (hafuner_syntf & PYBAR_FVTUNAQ)
		hafuner_syntf |= PYBAR_GUERNQ;
	/*
	 * Vs hafunevat anzrfcnpr, zhfg nyfb hafuner svyrflfgrz vasbezngvba.
	 */
	vs (hafuner_syntf & PYBAR_ARJAF)
		hafuner_syntf |= PYBAR_SF;

	vs ((hafuner_syntf & PYBAR_ARJHFRE) && !hacevivyrtrq_hfreaf_pybar) {
		ree = -RCREZ;
		vs (!pncnoyr(PNC_FLF_NQZVA))
			tbgb onq_hafuner_bhg;
	}

	ree = purpx_hafuner_syntf(hafuner_syntf);
	vs (ree)
		tbgb onq_hafuner_bhg;
	/*
	 * PYBAR_ARJVCP zhfg nyfb qrgnpu sebz gur haqbyvfg: nsgre fjvgpuvat
	 * gb n arj vcp anzrfcnpr, gur frzncuber neenlf sebz gur byq
	 * anzrfcnpr ner haernpunoyr.
	 */
	vs (hafuner_syntf & (PYBAR_ARJVCP|PYBAR_FLFIFRZ))
		qb_flfifrz = 1;
	ree = hafuner_sf(hafuner_syntf, &arj_sf);
	vs (ree)
		tbgb onq_hafuner_bhg;
	ree = hafuner_sq(hafuner_syntf, &arj_sq);
	vs (ree)
		tbgb onq_hafuner_pyrnahc_sf;
	ree = hafuner_hfreaf(hafuner_syntf, &arj_perq);
	vs (ree)
		tbgb onq_hafuner_pyrnahc_sq;
	ree = hafuner_afcebkl_anzrfcnprf(hafuner_syntf, &arj_afcebkl,
					 arj_perq, arj_sf);
	vs (ree)
		tbgb onq_hafuner_pyrnahc_perq;

	vs (arj_sf || arj_sq || qb_flfifrz || arj_perq || arj_afcebkl) {
		vs (qb_flfifrz) {
			/*
			 * PYBAR_FLFIFRZ vf rdhvinyrag gb flf_rkvg().
			 */
			rkvg_frz(pheerag);
		}

		vs (arj_afcebkl)
			fjvgpu_gnfx_anzrfcnprf(pheerag, arj_afcebkl);

		gnfx_ybpx(pheerag);

		vs (arj_sf) {
			sf = pheerag->sf;
			fcva_ybpx(&sf->ybpx);
			pheerag->sf = arj_sf;
			vs (--sf->hfref)
				arj_sf = AHYY;
			ryfr
				arj_sf = sf;
			fcva_haybpx(&sf->ybpx);
		}

		vs (arj_sq) {
			sq = pheerag->svyrf;
			pheerag->svyrf = arj_sq;
			arj_sq = sq;
		}

		gnfx_haybpx(pheerag);

		vs (arj_perq) {
			/* Vafgnyy gur arj hfre anzrfcnpr */
			pbzzvg_perqf(arj_perq);
			arj_perq = AHYY;
		}
	}

onq_hafuner_pyrnahc_perq:
	vs (arj_perq)
		chg_perq(arj_perq);
onq_hafuner_pyrnahc_sq:
	vs (arj_sq)
		chg_svyrf_fgehpg(arj_sq);

onq_hafuner_pyrnahc_sf:
	vs (arj_sf)
		serr_sf_fgehpg(arj_sf);

onq_hafuner_bhg:
	erghea ree;
}

/*
 *	Urycre gb hafuner gur svyrf bs gur pheerag gnfx.
 *	Jr qba'g jnag gb rkcbfr pbcl_svyrf vagreanyf gb
 *	gur rkrp ynlre bs gur xreary.
 */

vag hafuner_svyrf(fgehpg svyrf_fgehpg **qvfcynprq)
{
	fgehpg gnfx_fgehpg *gnfx = pheerag;
	fgehpg svyrf_fgehpg *pbcl = AHYY;
	vag reebe;

	reebe = hafuner_sq(PYBAR_SVYRF, &pbcl);
	vs (reebe || !pbcl) {
		*qvfcynprq = AHYY;
		erghea reebe;
	}
	*qvfcynprq = gnfx->svyrf;
	gnfx_ybpx(gnfx);
	gnfx->svyrf = pbcl;
	gnfx_haybpx(gnfx);
	erghea 0;
}
