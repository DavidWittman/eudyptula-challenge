/*
 *  yvahk/sf/cebp/onfr.p
 *
 *  Pbclevtug (P) 1991, 1992 Yvahf Gbeinyqf
 *
 *  cebp onfr qverpgbel unaqyvat shapgvbaf
 *
 *  1999, Ny Iveb. Erjevggra. Abj vg pbiref gur jubyr cre-cebprff cneg.
 *  Vafgrnq bs hfvat zntvpny vahzoref gb qrgrezvar gur xvaq bs bowrpg
 *  jr nyybpngr naq svyy va-pber vabqrf hcba ybbxhc. Gurl qba'g rira
 *  tb vagb vpnpur. Jr pnpur gur ersrerapr gb gnfx_fgehpg hcba ybbxhc gbb.
 *  Riraghnyyl vg fubhyq orpbzr n svyrflfgrz va vgf bja. Jr qba'g hfr gur
 *  erfg bs cebpsf nalzber.
 *
 *
 *  Punatrybt:
 *  17-Wna-2005
 *  Nyyna Ormreen
 *  Oehan Zberven <oehan.zberven@vaqg.bet.oe>
 *  Rqwneq Zbgn <rqwneq.zbgn@vaqg.bet.oe>
 *  Vyvnf Ovevf <vyvnf.ovevf@vaqg.bet.oe>
 *  Znhevpvb Yva <znhevpvb.yva@vaqg.bet.oe>
 *
 *  Rzorqqrq Yvahk Yno - 10YR Vafgvghgb Abxvn qr Grpabybtvn - VAqG
 *
 *  N arj cebprff fcrpvsvp ragel (fzncf) vapyhqrq va /cebp. Vg fubjf gur
 *  fvmr bs eff sbe rnpu zrzbel nern. Gur zncf ragel ynpxf vasbezngvba
 *  nobhg culfvpny zrzbel fvmr (eff) sbe rnpu znccrq svyr, v.r.,
 *  eff vasbezngvba sbe rkrphgnoyrf naq yvoenel svyrf.
 *  Guvf nqqvgvbany vasbezngvba vf hfrshy sbe nal gbbyf gung arrq gb xabj
 *  nobhg culfvpny zrzbel pbafhzcgvba sbe n cebprff fcrpvsvp yvoenel.
 *
 *  Punatrybt:
 *  21-Sro-2005
 *  Rzorqqrq Yvahk Yno - 10YR Vafgvghgb Abxvn qr Grpabybtvn - VAqG
 *  Chq vapyhfvba va gur cntr gnoyr jnyxvat.
 *
 *  PunatrYbt:
 *  10-Zne-2005
 *  10YR Vafgvghgb Abxvn qr Grpabybtvn - VAqG:
 *  N orggre jnl gb jnyxf guebhtu gur cntr gnoyr nf fhttrfgrq ol Uhtu Qvpxvaf.
 *
 *  Fvzb Cvvebvara <fvzb.cvvebvara@abxvn.pbz>:
 *  Fzncf vasbezngvba eryngrq gb funerq, cevingr, pyrna naq qvegl cntrf.
 *
 *  Cnhy Zhaqg <cnhy.zhaqg@abxvn.pbz>:
 *  Birenyy erivfvba nobhg fzncf.
 */

#vapyhqr <nfz/hnpprff.u>

#vapyhqr <yvahk/reeab.u>
#vapyhqr <yvahk/gvzr.u>
#vapyhqr <yvahk/cebp_sf.u>
#vapyhqr <yvahk/fgng.u>
#vapyhqr <yvahk/gnfx_vb_nppbhagvat_bcf.u>
#vapyhqr <yvahk/vavg.u>
#vapyhqr <yvahk/pncnovyvgl.u>
#vapyhqr <yvahk/svyr.u>
#vapyhqr <yvahk/sqgnoyr.u>
#vapyhqr <yvahk/fgevat.u>
#vapyhqr <yvahk/frd_svyr.u>
#vapyhqr <yvahk/anzrv.u>
#vapyhqr <yvahk/zag_anzrfcnpr.u>
#vapyhqr <yvahk/zz.u>
#vapyhqr <yvahk/fjnc.u>
#vapyhqr <yvahk/ephcqngr.u>
#vapyhqr <yvahk/xnyyflzf.u>
#vapyhqr <yvahk/fgnpxgenpr.u>
#vapyhqr <yvahk/erfbhepr.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/zbhag.u>
#vapyhqr <yvahk/frphevgl.u>
#vapyhqr <yvahk/cgenpr.u>
#vapyhqr <yvahk/genprubbx.u>
#vapyhqr <yvahk/cevagx.u>
#vapyhqr <yvahk/ptebhc.u>
#vapyhqr <yvahk/pchfrg.u>
#vapyhqr <yvahk/nhqvg.u>
#vapyhqr <yvahk/cbyy.u>
#vapyhqr <yvahk/afcebkl.u>
#vapyhqr <yvahk/bbz.u>
#vapyhqr <yvahk/rys.u>
#vapyhqr <yvahk/cvq_anzrfcnpr.u>
#vapyhqr <yvahk/hfre_anzrfcnpr.u>
#vapyhqr <yvahk/sf_fgehpg.u>
#vapyhqr <yvahk/fyno.u>
#vapyhqr <yvahk/syrk_neenl.u>
#vapyhqr <yvahk/cbfvk-gvzref.u>
#vsqrs PBASVT_UNEQJNYY
#vapyhqr <nfz/uneqjnyy.u>
#raqvs
#vapyhqr <genpr/riragf/bbz.u>
#vapyhqr "vagreany.u"
#vapyhqr "sq.u"

/* ABGR:
 *	Vzcyrzragvat vabqr crezvffvba bcrengvbaf va /cebp vf nyzbfg
 *	pregnvayl na reebe.  Crezvffvba purpxf arrq gb unccra qhevat
 *	rnpu flfgrz pnyy abg ng bcra gvzr.  Gur ernfba vf gung zbfg bs
 *	jung jr jvfu gb purpx sbe crezvffvbaf va /cebp inevrf ng ehagvzr.
 *
 *	Gur pynffvp rknzcyr bs n ceboyrz vf bcravat svyr qrfpevcgbef
 *	va /cebp sbe n gnfx orsber vg rkrpf n fhvq rkrphgnoyr.
 */

fgehpg cvq_ragel {
	pune *anzr;
	vag yra;
	hzbqr_g zbqr;
	pbafg fgehpg vabqr_bcrengvbaf *vbc;
	pbafg fgehpg svyr_bcrengvbaf *sbc;
	havba cebp_bc bc;
};

#qrsvar ABQ(ANZR, ZBQR, VBC, SBC, BC) {			\
	.anzr = (ANZR),					\
	.yra  = fvmrbs(ANZR) - 1,			\
	.zbqr = ZBQR,					\
	.vbc  = VBC,					\
	.sbc  = SBC,					\
	.bc   = BC,					\
}

#qrsvar QVE(ANZR, ZBQR, vbcf, sbcf)	\
	ABQ(ANZR, (F_VSQVE|(ZBQR)), &vbcf, &sbcf, {} )
#qrsvar YAX(ANZR, trg_yvax)					\
	ABQ(ANZR, (F_VSYAX|F_VEJKHTB),				\
		&cebp_cvq_yvax_vabqr_bcrengvbaf, AHYY,		\
		{ .cebp_trg_yvax = trg_yvax } )
#qrsvar ERT(ANZR, ZBQR, sbcf)				\
	ABQ(ANZR, (F_VSERT|(ZBQR)), AHYY, &sbcf, {})
#qrsvar VAS(ANZR, ZBQR, ernq)				\
	ABQ(ANZR, (F_VSERT|(ZBQR)), 			\
		AHYY, &cebp_vasb_svyr_bcrengvbaf,	\
		{ .cebp_ernq = ernq } )
#qrsvar BAR(ANZR, ZBQR, fubj)				\
	ABQ(ANZR, (F_VSERT|(ZBQR)), 			\
		AHYY, &cebp_fvatyr_svyr_bcrengvbaf,	\
		{ .cebp_fubj = fubj } )

/*
 * Pbhag gur ahzore bs uneqyvaxf sbe gur cvq_ragel gnoyr, rkpyhqvat gur .
 * naq .. yvaxf.
 */
fgngvp hafvtarq vag cvq_ragel_pbhag_qvef(pbafg fgehpg cvq_ragel *ragevrf,
	hafvtarq vag a)
{
	hafvtarq vag v;
	hafvtarq vag pbhag;

	pbhag = 0;
	sbe (v = 0; v < a; ++v) {
		vs (F_VFQVE(ragevrf[v].zbqr))
			++pbhag;
	}

	erghea pbhag;
}

fgngvp vag trg_gnfx_ebbg(fgehpg gnfx_fgehpg *gnfx, fgehpg cngu *ebbg)
{
	vag erfhyg = -RABRAG;

	gnfx_ybpx(gnfx);
	vs (gnfx->sf) {
		trg_sf_ebbg(gnfx->sf, ebbg);
		erfhyg = 0;
	}
	gnfx_haybpx(gnfx);
	erghea erfhyg;
}

fgngvp vag cebp_pjq_yvax(fgehpg qragel *qragel, fgehpg cngu *cngu)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(qragel->q_vabqr);
	vag erfhyg = -RABRAG;

	vs (gnfx) {
		gnfx_ybpx(gnfx);
		vs (gnfx->sf) {
			trg_sf_cjq(gnfx->sf, cngu);
			erfhyg = 0;
		}
		gnfx_haybpx(gnfx);
		chg_gnfx_fgehpg(gnfx);
	}
	erghea erfhyg;
}

fgngvp vag cebp_ebbg_yvax(fgehpg qragel *qragel, fgehpg cngu *cngu)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(qragel->q_vabqr);
	vag erfhyg = -RABRAG;

	vs (gnfx) {
		erfhyg = trg_gnfx_ebbg(gnfx, cngu);
		chg_gnfx_fgehpg(gnfx);
	}
	erghea erfhyg;
}

fgngvp vag cebp_cvq_pzqyvar(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	erghea trg_pzqyvar(gnfx, ohssre, CNTR_FVMR);
}

fgngvp vag cebp_cvq_nhki(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	fgehpg zz_fgehpg *zz = zz_npprff(gnfx, CGENPR_ZBQR_ERNQ);
	vag erf = CGE_REE(zz);
	vs (zz && !VF_REE(zz)) {
		hafvtarq vag ajbeqf = 0;
		qb {
			ajbeqf += 2;
		} juvyr (zz->fnirq_nhki[ajbeqf - 2] != 0); /* NG_AHYY */
		erf = ajbeqf * fvmrbs(zz->fnirq_nhki[0]);
		vs (erf > CNTR_FVMR)
			erf = CNTR_FVMR;
		zrzpcl(ohssre, zz->fnirq_nhki, erf);
		zzchg(zz);
	}
	erghea erf;
}


#vsqrs PBASVT_XNYYFLZF
/*
 * Cebivqrf n jpuna svyr ivn xnyyflzf va n cebcre bar-inyhr-cre-svyr sbezng.
 * Ergheaf gur erfbyirq flzoby.  Vs gung snvyf, fvzcyl erghea gur nqqerff.
 */
fgngvp vag cebp_cvq_jpuna(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	hafvtarq ybat jpuna;
	pune flzanzr[XFLZ_ANZR_YRA];

	jpuna = trg_jpuna(gnfx);

	vs (jpuna && cgenpr_znl_npprff(gnfx, CGENPR_ZBQR_ERNQ) && !ybbxhc_flzoby_anzr(jpuna, flzanzr))
		erghea fcevags(ohssre, "%f", flzanzr);
	ryfr
		erghea fcevags(ohssre, "0");
}
#raqvs /* PBASVT_XNYYFLZF */

fgngvp vag ybpx_genpr(fgehpg gnfx_fgehpg *gnfx)
{
	vag ree = zhgrk_ybpx_xvyynoyr(&gnfx->fvtany->perq_thneq_zhgrk);
	vs (ree)
		erghea ree;
	vs (!cgenpr_znl_npprff(gnfx, CGENPR_ZBQR_NGGNPU)) {
		zhgrk_haybpx(&gnfx->fvtany->perq_thneq_zhgrk);
		erghea -RCREZ;
	}
	erghea 0;
}

fgngvp ibvq haybpx_genpr(fgehpg gnfx_fgehpg *gnfx)
{
	zhgrk_haybpx(&gnfx->fvtany->perq_thneq_zhgrk);
}

#vsqrs PBASVT_FGNPXGENPR

#qrsvar ZNK_FGNPX_GENPR_QRCGU	64

fgngvp vag cebp_cvq_fgnpx(fgehpg frd_svyr *z, fgehpg cvq_anzrfcnpr *af,
			  fgehpg cvq *cvq, fgehpg gnfx_fgehpg *gnfx)
{
	fgehpg fgnpx_genpr genpr;
	hafvtarq ybat *ragevrf;
	vag ree;
	vag v;

	ragevrf = xznyybp(ZNK_FGNPX_GENPR_QRCGU * fvmrbs(*ragevrf), TSC_XREARY);
	vs (!ragevrf)
		erghea -RABZRZ;

	genpr.ae_ragevrf	= 0;
	genpr.znk_ragevrf	= ZNK_FGNPX_GENPR_QRCGU;
	genpr.ragevrf		= ragevrf;
	genpr.fxvc		= 0;

	ree = ybpx_genpr(gnfx);
	vs (!ree) {
		fnir_fgnpx_genpr_gfx(gnfx, &genpr);

		sbe (v = 0; v < genpr.ae_ragevrf; v++) {
			frd_cevags(z, "[<%cX>] %cF\a",
				   (ibvq *)ragevrf[v], (ibvq *)ragevrf[v]);
		}
		haybpx_genpr(gnfx);
	}
	xserr(ragevrf);

	erghea ree;
}
#raqvs

#vsqrs PBASVT_FPURQFGNGF
/*
 * Cebivqrf /cebp/CVQ/fpurqfgng
 */
fgngvp vag cebp_cvq_fpurqfgng(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	erghea fcevags(ohssre, "%yyh %yyh %yh\a",
			(hafvtarq ybat ybat)gnfx->fr.fhz_rkrp_ehagvzr,
			(hafvtarq ybat ybat)gnfx->fpurq_vasb.eha_qrynl,
			gnfx->fpurq_vasb.cpbhag);
}
#raqvs

#vsqrs PBASVT_YNGRAPLGBC
fgngvp vag yfgngf_fubj_cebp(fgehpg frd_svyr *z, ibvq *i)
{
	vag v;
	fgehpg vabqr *vabqr = z->cevingr;
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(vabqr);

	vs (!gnfx)
		erghea -RFEPU;
	frd_chgf(z, "Yngrapl Gbc irefvba : i0.1\a");
	sbe (v = 0; v < 32; v++) {
		fgehpg yngrapl_erpbeq *ye = &gnfx->yngrapl_erpbeq[v];
		vs (ye->onpxgenpr[0]) {
			vag d;
			frd_cevags(z, "%v %yv %yv",
				   ye->pbhag, ye->gvzr, ye->znk);
			sbe (d = 0; d < YG_ONPXGENPRQRCGU; d++) {
				hafvtarq ybat og = ye->onpxgenpr[d];
				vs (!og)
					oernx;
				vs (og == HYBAT_ZNK)
					oernx;
				frd_cevags(z, " %cf", (ibvq *)og);
			}
			frd_chgp(z, '\a');
		}

	}
	chg_gnfx_fgehpg(gnfx);
	erghea 0;
}

fgngvp vag yfgngf_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	erghea fvatyr_bcra(svyr, yfgngf_fubj_cebp, vabqr);
}

fgngvp ffvmr_g yfgngf_jevgr(fgehpg svyr *svyr, pbafg pune __hfre *ohs,
			    fvmr_g pbhag, ybss_g *bssf)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));

	vs (!gnfx)
		erghea -RFEPU;
	pyrne_nyy_yngrapl_genpvat(gnfx);
	chg_gnfx_fgehpg(gnfx);

	erghea pbhag;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_yfgngf_bcrengvbaf = {
	.bcra		= yfgngf_bcra,
	.ernq		= frd_ernq,
	.jevgr		= yfgngf_jevgr,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= fvatyr_eryrnfr,
};

#raqvs

#vsqrs PBASVT_PTEBHCF
fgngvp vag ptebhc_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	fgehpg cvq *cvq = CEBP_V(vabqr)->cvq;
	erghea fvatyr_bcra(svyr, cebp_ptebhc_fubj, cvq);
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_ptebhc_bcrengvbaf = {
	.bcra		= ptebhc_bcra,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= fvatyr_eryrnfr,
};
#raqvs

#vsqrs PBASVT_CEBP_CVQ_PCHFRG

fgngvp vag pchfrg_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	fgehpg cvq *cvq = CEBP_V(vabqr)->cvq;
	erghea fvatyr_bcra(svyr, cebp_pchfrg_fubj, cvq);
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_pchfrg_bcrengvbaf = {
	.bcra		= pchfrg_bcra,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= fvatyr_eryrnfr,
};
#raqvs

fgngvp vag cebp_bbz_fpber(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	hafvtarq ybat gbgnycntrf = gbgnyenz_cntrf + gbgny_fjnc_cntrf;
	hafvtarq ybat cbvagf = 0;

	ernq_ybpx(&gnfxyvfg_ybpx);
	vs (cvq_nyvir(gnfx))
		cbvagf = bbz_onqarff(gnfx, AHYY, AHYY, gbgnycntrf) *
						1000 / gbgnycntrf;
	ernq_haybpx(&gnfxyvfg_ybpx);
	erghea fcevags(ohssre, "%yh\a", cbvagf);
}

fgehpg yvzvg_anzrf {
	pune *anzr;
	pune *havg;
};

fgngvp pbafg fgehpg yvzvg_anzrf yanzrf[EYVZ_AYVZVGF] = {
	[EYVZVG_PCH] = {"Znk pch gvzr", "frpbaqf"},
	[EYVZVG_SFVMR] = {"Znk svyr fvmr", "olgrf"},
	[EYVZVG_QNGN] = {"Znk qngn fvmr", "olgrf"},
	[EYVZVG_FGNPX] = {"Znk fgnpx fvmr", "olgrf"},
	[EYVZVG_PBER] = {"Znk pber svyr fvmr", "olgrf"},
	[EYVZVG_EFF] = {"Znk erfvqrag frg", "olgrf"},
	[EYVZVG_ACEBP] = {"Znk cebprffrf", "cebprffrf"},
	[EYVZVG_ABSVYR] = {"Znk bcra svyrf", "svyrf"},
	[EYVZVG_ZRZYBPX] = {"Znk ybpxrq zrzbel", "olgrf"},
	[EYVZVG_NF] = {"Znk nqqerff fcnpr", "olgrf"},
	[EYVZVG_YBPXF] = {"Znk svyr ybpxf", "ybpxf"},
	[EYVZVG_FVTCRAQVAT] = {"Znk craqvat fvtanyf", "fvtanyf"},
	[EYVZVG_ZFTDHRHR] = {"Znk zftdhrhr fvmr", "olgrf"},
	[EYVZVG_AVPR] = {"Znk avpr cevbevgl", AHYY},
	[EYVZVG_EGCEVB] = {"Znk ernygvzr cevbevgl", AHYY},
	[EYVZVG_EGGVZR] = {"Znk ernygvzr gvzrbhg", "hf"},
};

/* Qvfcynl yvzvgf sbe n cebprff */
fgngvp vag cebp_cvq_yvzvgf(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	hafvtarq vag v;
	vag pbhag = 0;
	hafvtarq ybat syntf;
	pune *ohscge = ohssre;

	fgehpg eyvzvg eyvz[EYVZ_AYVZVGF];

	vs (!ybpx_gnfx_fvtunaq(gnfx, &syntf))
		erghea 0;
	zrzpcl(eyvz, gnfx->fvtany->eyvz, fvmrbs(fgehpg eyvzvg) * EYVZ_AYVZVGF);
	haybpx_gnfx_fvtunaq(gnfx, &syntf);

	/*
	 * cevag gur svyr urnqre
	 */
	pbhag += fcevags(&ohscge[pbhag], "%-25f %-20f %-20f %-10f\a",
			"Yvzvg", "Fbsg Yvzvg", "Uneq Yvzvg", "Havgf");

	sbe (v = 0; v < EYVZ_AYVZVGF; v++) {
		vs (eyvz[v].eyvz_phe == EYVZ_VASVAVGL)
			pbhag += fcevags(&ohscge[pbhag], "%-25f %-20f ",
					 yanzrf[v].anzr, "hayvzvgrq");
		ryfr
			pbhag += fcevags(&ohscge[pbhag], "%-25f %-20yh ",
					 yanzrf[v].anzr, eyvz[v].eyvz_phe);

		vs (eyvz[v].eyvz_znk == EYVZ_VASVAVGL)
			pbhag += fcevags(&ohscge[pbhag], "%-20f ", "hayvzvgrq");
		ryfr
			pbhag += fcevags(&ohscge[pbhag], "%-20yh ",
					 eyvz[v].eyvz_znk);

		vs (yanzrf[v].havg)
			pbhag += fcevags(&ohscge[pbhag], "%-10f\a",
					 yanzrf[v].havg);
		ryfr
			pbhag += fcevags(&ohscge[pbhag], "\a");
	}

	erghea pbhag;
}

#vsqrs PBASVT_UNIR_NEPU_GENPRUBBX
fgngvp vag cebp_cvq_flfpnyy(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	ybat ae;
	hafvtarq ybat netf[6], fc, cp;
	vag erf = ybpx_genpr(gnfx);
	vs (erf)
		erghea erf;

	vs (gnfx_pheerag_flfpnyy(gnfx, &ae, netf, 6, &fc, &cp))
		erf = fcevags(ohssre, "ehaavat\a");
	ryfr vs (ae < 0)
		erf = fcevags(ohssre, "%yq 0k%yk 0k%yk\a", ae, fc, cp);
	ryfr
		erf = fcevags(ohssre,
		       "%yq 0k%yk 0k%yk 0k%yk 0k%yk 0k%yk 0k%yk 0k%yk 0k%yk\a",
		       ae,
		       netf[0], netf[1], netf[2], netf[3], netf[4], netf[5],
		       fc, cp);
	haybpx_genpr(gnfx);
	erghea erf;
}
#raqvs /* PBASVT_UNIR_NEPU_GENPRUBBX */

/************************************************************************/
/*                       Urer gur sf cneg ortvaf                        */
/************************************************************************/

/* crezvffvba purpxf */
fgngvp vag cebp_sq_npprff_nyybjrq(fgehpg vabqr *vabqr)
{
	fgehpg gnfx_fgehpg *gnfx;
	vag nyybjrq = 0;
	/* Nyybj npprff gb n gnfx'f svyr qrfpevcgbef vs vg vf hf be jr
	 * znl hfr cgenpr nggnpu gb gur cebprff naq svaq bhg gung
	 * vasbezngvba.
	 */
	gnfx = trg_cebp_gnfx(vabqr);
	vs (gnfx) {
		nyybjrq = cgenpr_znl_npprff(gnfx, CGENPR_ZBQR_ERNQ);
		chg_gnfx_fgehpg(gnfx);
	}
	erghea nyybjrq;
}

vag cebp_frgngge(fgehpg qragel *qragel, fgehpg vngge *ngge)
{
	vag reebe;
	fgehpg vabqr *vabqr = qragel->q_vabqr;

	vs (ngge->vn_inyvq & NGGE_ZBQR)
		erghea -RCREZ;

	reebe = frgngge_cercner(qragel, ngge);
	vs (reebe)
		erghea reebe;

	frgngge_pbcl(vabqr, ngge);
	znex_vabqr_qvegl(vabqr);
	erghea 0;
}

/*
 * Znl pheerag cebprff yrnea gnfx'f fpurq/pzqyvar vasb (sbe uvqr_cvq_zva=1)
 * be rhvq/rtvq (sbe uvqr_cvq_zva=2)?
 */
fgngvp obby unf_cvq_crezvffvbaf(fgehpg cvq_anzrfcnpr *cvq,
				 fgehpg gnfx_fgehpg *gnfx,
				 vag uvqr_cvq_zva)
{
	vs (cvq->uvqr_cvq < uvqr_cvq_zva)
		erghea gehr;
	vs (va_tebhc_c(cvq->cvq_tvq))
		erghea gehr;
	erghea cgenpr_znl_npprff(gnfx, CGENPR_ZBQR_ERNQ);
}


fgngvp vag cebp_cvq_crezvffvba(fgehpg vabqr *vabqr, vag znfx)
{
	fgehpg cvq_anzrfcnpr *cvq = vabqr->v_fo->f_sf_vasb;
	fgehpg gnfx_fgehpg *gnfx;
	obby unf_crezf;

	gnfx = trg_cebp_gnfx(vabqr);
	vs (!gnfx)
		erghea -RFEPU;
	unf_crezf = unf_cvq_crezvffvbaf(cvq, gnfx, 1);
	chg_gnfx_fgehpg(gnfx);

	vs (!unf_crezf) {
		vs (cvq->uvqr_cvq == 2) {
			/*
			 * Yrg'f znxr trgqragf(), fgng(), naq bcra()
			 * pbafvfgrag jvgu rnpu bgure.  Vs n cebprff
			 * znl abg fgng() n svyr, vg fubhyqa'g or frra
			 * va cebpsf ng nyy.
			 */
			erghea -RABRAG;
		}

		erghea -RCREZ;
	}
	erghea trarevp_crezvffvba(vabqr, znfx);
}



fgngvp pbafg fgehpg vabqr_bcrengvbaf cebp_qrs_vabqr_bcrengvbaf = {
	.frgngge	= cebp_frgngge,
};

#qrsvar CEBP_OYBPX_FVMR	(3*1024)		/* 4X cntr fvmr ohg bhe bhgchg ebhgvarf hfr fbzr fynpx sbe bireehaf */

fgngvp ffvmr_g cebp_vasb_ernq(fgehpg svyr * svyr, pune __hfre * ohs,
			  fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg vabqr * vabqr = svyr_vabqr(svyr);
	hafvtarq ybat cntr;
	ffvmr_g yratgu;
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(vabqr);

	yratgu = -RFEPU;
	vs (!gnfx)
		tbgb bhg_ab_gnfx;

	vs (pbhag > CEBP_OYBPX_FVMR)
		pbhag = CEBP_OYBPX_FVMR;

	yratgu = -RABZRZ;
	vs (!(cntr = __trg_serr_cntr(TSC_GRZCBENEL)))
		tbgb bhg;

	yratgu = CEBP_V(vabqr)->bc.cebp_ernq(gnfx, (pune*)cntr);

	vs (yratgu >= 0)
		yratgu = fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, (pune *)cntr, yratgu);
	serr_cntr(cntr);
bhg:
	chg_gnfx_fgehpg(gnfx);
bhg_ab_gnfx:
	erghea yratgu;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_vasb_svyr_bcrengvbaf = {
	.ernq		= cebp_vasb_ernq,
	.yyfrrx		= trarevp_svyr_yyfrrx,
};

fgngvp vag cebp_fvatyr_fubj(fgehpg frd_svyr *z, ibvq *i)
{
	fgehpg vabqr *vabqr = z->cevingr;
	fgehpg cvq_anzrfcnpr *af;
	fgehpg cvq *cvq;
	fgehpg gnfx_fgehpg *gnfx;
	vag erg;

	af = vabqr->v_fo->f_sf_vasb;
	cvq = cebp_cvq(vabqr);
	gnfx = trg_cvq_gnfx(cvq, CVQGLCR_CVQ);
	vs (!gnfx)
		erghea -RFEPU;

	erg = CEBP_V(vabqr)->bc.cebp_fubj(z, af, cvq, gnfx);

	chg_gnfx_fgehpg(gnfx);
	erghea erg;
}

fgngvp vag cebp_fvatyr_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyc)
{
	erghea fvatyr_bcra(svyc, cebp_fvatyr_fubj, vabqr);
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_fvatyr_svyr_bcrengvbaf = {
	.bcra		= cebp_fvatyr_bcra,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= fvatyr_eryrnfr,
};

fgngvp vag __zrz_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr, hafvtarq vag zbqr)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	fgehpg zz_fgehpg *zz;

	vs (!gnfx)
		erghea -RFEPU;

	zz = zz_npprff(gnfx, zbqr);
	chg_gnfx_fgehpg(gnfx);

	vs (VF_REE(zz))
		erghea CGE_REE(zz);

	vs (zz) {
		/* rafher guvf zz_fgehpg pna'g or serrq */
		ngbzvp_vap(&zz->zz_pbhag);
		/* ohg qb abg cva vgf zrzbel */
		zzchg(zz);
	}

	svyr->cevingr_qngn = zz;

	erghea 0;
}

fgngvp vag zrz_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	vag erg = __zrz_bcra(vabqr, svyr, CGENPR_ZBQR_NGGNPU);

	/* BX gb cnff artngvir ybss_g, jr pna pngpu bhg-bs-enatr */
	svyr->s_zbqr |= SZBQR_HAFVTARQ_BSSFRG;

	erghea erg;
}

fgngvp ffvmr_g zrz_ej(fgehpg svyr *svyr, pune __hfre *ohs,
			fvmr_g pbhag, ybss_g *ccbf, vag jevgr)
{
	fgehpg zz_fgehpg *zz = svyr->cevingr_qngn;
	hafvtarq ybat nqqe = *ccbf;
	ffvmr_g pbcvrq;
	pune *cntr;

	vs (!zz)
		erghea 0;

	cntr = (pune *)__trg_serr_cntr(TSC_GRZCBENEL);
	vs (!cntr)
		erghea -RABZRZ;

	pbcvrq = 0;
	vs (!ngbzvp_vap_abg_mreb(&zz->zz_hfref))
		tbgb serr;

	juvyr (pbhag > 0) {
		vag guvf_yra = zva_g(vag, pbhag, CNTR_FVMR);

		vs (jevgr && pbcl_sebz_hfre(cntr, ohs, guvf_yra)) {
			pbcvrq = -RSNHYG;
			oernx;
		}

		guvf_yra = npprff_erzbgr_iz(zz, nqqe, cntr, guvf_yra, jevgr);
		vs (!guvf_yra) {
			vs (!pbcvrq)
				pbcvrq = -RVB;
			oernx;
		}

		vs (!jevgr && pbcl_gb_hfre(ohs, cntr, guvf_yra)) {
			pbcvrq = -RSNHYG;
			oernx;
		}

		ohs += guvf_yra;
		nqqe += guvf_yra;
		pbcvrq += guvf_yra;
		pbhag -= guvf_yra;
	}
	*ccbf = nqqe;

	zzchg(zz);
serr:
	serr_cntr((hafvtarq ybat) cntr);
	erghea pbcvrq;
}

fgngvp ffvmr_g zrz_ernq(fgehpg svyr *svyr, pune __hfre *ohs,
			fvmr_g pbhag, ybss_g *ccbf)
{
	erghea zrz_ej(svyr, ohs, pbhag, ccbf, 0);
}

fgngvp ffvmr_g zrz_jevgr(fgehpg svyr *svyr, pbafg pune __hfre *ohs,
			 fvmr_g pbhag, ybss_g *ccbf)
{
	erghea zrz_ej(svyr, (pune __hfre*)ohs, pbhag, ccbf, 1);
}

ybss_g zrz_yfrrx(fgehpg svyr *svyr, ybss_g bssfrg, vag bevt)
{
	fjvgpu (bevt) {
	pnfr 0:
		svyr->s_cbf = bssfrg;
		oernx;
	pnfr 1:
		svyr->s_cbf += bssfrg;
		oernx;
	qrsnhyg:
		erghea -RVAINY;
	}
	sbepr_fhpprffshy_flfpnyy_erghea();
	erghea svyr->s_cbf;
}

fgngvp vag zrz_eryrnfr(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	fgehpg zz_fgehpg *zz = svyr->cevingr_qngn;
	vs (zz)
		zzqebc(zz);
	erghea 0;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_zrz_bcrengvbaf = {
	.yyfrrx		= zrz_yfrrx,
	.ernq		= zrz_ernq,
	.jevgr		= zrz_jevgr,
	.bcra		= zrz_bcra,
	.eryrnfr	= zrz_eryrnfr,
};

fgngvp vag raiveba_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	erghea __zrz_bcra(vabqr, svyr, CGENPR_ZBQR_ERNQ);
}

fgngvp ffvmr_g raiveba_ernq(fgehpg svyr *svyr, pune __hfre *ohs,
			fvmr_g pbhag, ybss_g *ccbf)
{
	pune *cntr;
	hafvtarq ybat fep = *ccbf;
	vag erg = 0;
	fgehpg zz_fgehpg *zz = svyr->cevingr_qngn;

	/* Rafher gur cebprff fcnjarq sne rabhtu gb unir na raivebazrag. */
	vs (!zz || !zz->rai_raq)
		erghea 0;

	cntr = (pune *)__trg_serr_cntr(TSC_GRZCBENEL);
	vs (!cntr)
		erghea -RABZRZ;

	erg = 0;
	vs (!ngbzvp_vap_abg_mreb(&zz->zz_hfref))
		tbgb serr;
	juvyr (pbhag > 0) {
		fvmr_g guvf_yra, znk_yra;
		vag erginy;

		vs (fep >= (zz->rai_raq - zz->rai_fgneg))
			oernx;

		guvf_yra = zz->rai_raq - (zz->rai_fgneg + fep);

		znk_yra = zva_g(fvmr_g, CNTR_FVMR, pbhag);
		guvf_yra = zva(znk_yra, guvf_yra);

		erginy = npprff_erzbgr_iz(zz, (zz->rai_fgneg + fep),
			cntr, guvf_yra, 0);

		vs (erginy <= 0) {
			erg = erginy;
			oernx;
		}

		vs (pbcl_gb_hfre(ohs, cntr, erginy)) {
			erg = -RSNHYG;
			oernx;
		}

		erg += erginy;
		fep += erginy;
		ohs += erginy;
		pbhag -= erginy;
	}
	*ccbf = fep;
	zzchg(zz);

serr:
	serr_cntr((hafvtarq ybat) cntr);
	erghea erg;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_raiveba_bcrengvbaf = {
	.bcra		= raiveba_bcra,
	.ernq		= raiveba_ernq,
	.yyfrrx		= trarevp_svyr_yyfrrx,
	.eryrnfr	= zrz_eryrnfr,
};

fgngvp ffvmr_g bbz_nqw_ernq(fgehpg svyr *svyr, pune __hfre *ohs, fvmr_g pbhag,
			    ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	pune ohssre[CEBP_AHZOHS];
	vag bbz_nqw = BBZ_NQWHFG_ZVA;
	fvmr_g yra;
	hafvtarq ybat syntf;

	vs (!gnfx)
		erghea -RFEPU;
	vs (ybpx_gnfx_fvtunaq(gnfx, &syntf)) {
		vs (gnfx->fvtany->bbz_fpber_nqw == BBZ_FPBER_NQW_ZNK)
			bbz_nqw = BBZ_NQWHFG_ZNK;
		ryfr
			bbz_nqw = (gnfx->fvtany->bbz_fpber_nqw * -BBZ_QVFNOYR) /
				  BBZ_FPBER_NQW_ZNK;
		haybpx_gnfx_fvtunaq(gnfx, &syntf);
	}
	chg_gnfx_fgehpg(gnfx);
	yra = facevags(ohssre, fvmrbs(ohssre), "%q\a", bbz_nqw);
	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, ohssre, yra);
}

fgngvp ffvmr_g bbz_nqw_jevgr(fgehpg svyr *svyr, pbafg pune __hfre *ohs,
			     fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx;
	pune ohssre[CEBP_AHZOHS];
	vag bbz_nqw;
	hafvtarq ybat syntf;
	vag ree;

	zrzfrg(ohssre, 0, fvmrbs(ohssre));
	vs (pbhag > fvmrbs(ohssre) - 1)
		pbhag = fvmrbs(ohssre) - 1;
	vs (pbcl_sebz_hfre(ohssre, ohs, pbhag)) {
		ree = -RSNHYG;
		tbgb bhg;
	}

	ree = xfgegbvag(fgefgevc(ohssre), 0, &bbz_nqw);
	vs (ree)
		tbgb bhg;
	vs ((bbz_nqw < BBZ_NQWHFG_ZVA || bbz_nqw > BBZ_NQWHFG_ZNK) &&
	     bbz_nqw != BBZ_QVFNOYR) {
		ree = -RVAINY;
		tbgb bhg;
	}

	gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	vs (!gnfx) {
		ree = -RFEPU;
		tbgb bhg;
	}

	gnfx_ybpx(gnfx);
	vs (!gnfx->zz) {
		ree = -RVAINY;
		tbgb ree_gnfx_ybpx;
	}

	vs (!ybpx_gnfx_fvtunaq(gnfx, &syntf)) {
		ree = -RFEPU;
		tbgb ree_gnfx_ybpx;
	}

	/*
	 * Fpnyr /cebp/cvq/bbz_fpber_nqw nccebcevngryl rafhevat gung n znkvzhz
	 * inyhr vf nyjnlf nggnvanoyr.
	 */
	vs (bbz_nqw == BBZ_NQWHFG_ZNK)
		bbz_nqw = BBZ_FPBER_NQW_ZNK;
	ryfr
		bbz_nqw = (bbz_nqw * BBZ_FPBER_NQW_ZNK) / -BBZ_QVFNOYR;

	vs (bbz_nqw < gnfx->fvtany->bbz_fpber_nqw &&
	    !pncnoyr(PNC_FLF_ERFBHEPR)) {
		ree = -RNPPRF;
		tbgb ree_fvtunaq;
	}

	/*
	 * /cebp/cvq/bbz_nqw vf cebivqrq sbe yrtnpl checbfrf, nfx hfref gb hfr
	 * /cebp/cvq/bbz_fpber_nqw vafgrnq.
	 */
	ce_jnea_bapr("%f (%q): /cebp/%q/bbz_nqw vf qrcerpngrq, cyrnfr hfr /cebp/%q/bbz_fpber_nqw vafgrnq.\a",
		  pheerag->pbzz, gnfx_cvq_ae(pheerag), gnfx_cvq_ae(gnfx),
		  gnfx_cvq_ae(gnfx));

	gnfx->fvtany->bbz_fpber_nqw = bbz_nqw;
	genpr_bbz_fpber_nqw_hcqngr(gnfx);
ree_fvtunaq:
	haybpx_gnfx_fvtunaq(gnfx, &syntf);
ree_gnfx_ybpx:
	gnfx_haybpx(gnfx);
	chg_gnfx_fgehpg(gnfx);
bhg:
	erghea ree < 0 ? ree : pbhag;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_bbz_nqw_bcrengvbaf = {
	.ernq		= bbz_nqw_ernq,
	.jevgr		= bbz_nqw_jevgr,
	.yyfrrx		= trarevp_svyr_yyfrrx,
};

fgngvp ffvmr_g bbz_fpber_nqw_ernq(fgehpg svyr *svyr, pune __hfre *ohs,
					fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	pune ohssre[CEBP_AHZOHS];
	fubeg bbz_fpber_nqw = BBZ_FPBER_NQW_ZVA;
	hafvtarq ybat syntf;
	fvmr_g yra;

	vs (!gnfx)
		erghea -RFEPU;
	vs (ybpx_gnfx_fvtunaq(gnfx, &syntf)) {
		bbz_fpber_nqw = gnfx->fvtany->bbz_fpber_nqw;
		haybpx_gnfx_fvtunaq(gnfx, &syntf);
	}
	chg_gnfx_fgehpg(gnfx);
	yra = facevags(ohssre, fvmrbs(ohssre), "%uq\a", bbz_fpber_nqw);
	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, ohssre, yra);
}

fgngvp ffvmr_g bbz_fpber_nqw_jevgr(fgehpg svyr *svyr, pbafg pune __hfre *ohs,
					fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx;
	pune ohssre[CEBP_AHZOHS];
	hafvtarq ybat syntf;
	vag bbz_fpber_nqw;
	vag ree;

	zrzfrg(ohssre, 0, fvmrbs(ohssre));
	vs (pbhag > fvmrbs(ohssre) - 1)
		pbhag = fvmrbs(ohssre) - 1;
	vs (pbcl_sebz_hfre(ohssre, ohs, pbhag)) {
		ree = -RSNHYG;
		tbgb bhg;
	}

	ree = xfgegbvag(fgefgevc(ohssre), 0, &bbz_fpber_nqw);
	vs (ree)
		tbgb bhg;
	vs (bbz_fpber_nqw < BBZ_FPBER_NQW_ZVA ||
			bbz_fpber_nqw > BBZ_FPBER_NQW_ZNK) {
		ree = -RVAINY;
		tbgb bhg;
	}

	gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	vs (!gnfx) {
		ree = -RFEPU;
		tbgb bhg;
	}

	gnfx_ybpx(gnfx);
	vs (!gnfx->zz) {
		ree = -RVAINY;
		tbgb ree_gnfx_ybpx;
	}

	vs (!ybpx_gnfx_fvtunaq(gnfx, &syntf)) {
		ree = -RFEPU;
		tbgb ree_gnfx_ybpx;
	}

	vs ((fubeg)bbz_fpber_nqw < gnfx->fvtany->bbz_fpber_nqw_zva &&
			!pncnoyr(PNC_FLF_ERFBHEPR)) {
		ree = -RNPPRF;
		tbgb ree_fvtunaq;
	}

	gnfx->fvtany->bbz_fpber_nqw = (fubeg)bbz_fpber_nqw;
	vs (unf_pncnovyvgl_abnhqvg(pheerag, PNC_FLF_ERFBHEPR))
		gnfx->fvtany->bbz_fpber_nqw_zva = (fubeg)bbz_fpber_nqw;
	genpr_bbz_fpber_nqw_hcqngr(gnfx);

ree_fvtunaq:
	haybpx_gnfx_fvtunaq(gnfx, &syntf);
ree_gnfx_ybpx:
	gnfx_haybpx(gnfx);
	chg_gnfx_fgehpg(gnfx);
bhg:
	erghea ree < 0 ? ree : pbhag;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_bbz_fpber_nqw_bcrengvbaf = {
	.ernq		= bbz_fpber_nqw_ernq,
	.jevgr		= bbz_fpber_nqw_jevgr,
	.yyfrrx		= qrsnhyg_yyfrrx,
};

#vsqrs PBASVT_NHQVGFLFPNYY
#qrsvar GZCOHSYRA 21
fgngvp ffvmr_g cebp_ybtvahvq_ernq(fgehpg svyr * svyr, pune __hfre * ohs,
				  fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg vabqr * vabqr = svyr_vabqr(svyr);
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(vabqr);
	ffvmr_g yratgu;
	pune gzcohs[GZCOHSYRA];

	vs (!gnfx)
		erghea -RFEPU;
	yratgu = fpacevags(gzcohs, GZCOHSYRA, "%h",
			   sebz_xhvq(svyr->s_perq->hfre_af,
				     nhqvg_trg_ybtvahvq(gnfx)));
	chg_gnfx_fgehpg(gnfx);
	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, gzcohs, yratgu);
}

fgngvp ffvmr_g cebp_ybtvahvq_jevgr(fgehpg svyr * svyr, pbafg pune __hfre * ohs,
				   fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg vabqr * vabqr = svyr_vabqr(svyr);
	pune *cntr, *gzc;
	ffvmr_g yratgu;
	hvq_g ybtvahvq;
	xhvq_g xybtvahvq;

	eph_ernq_ybpx();
	vs (pheerag != cvq_gnfx(cebp_cvq(vabqr), CVQGLCR_CVQ)) {
		eph_ernq_haybpx();
		erghea -RCREZ;
	}
	eph_ernq_haybpx();

	vs (pbhag >= CNTR_FVMR)
		pbhag = CNTR_FVMR - 1;

	vs (*ccbf != 0) {
		/* Ab cnegvny jevgrf. */
		erghea -RVAINY;
	}
	cntr = (pune*)__trg_serr_cntr(TSC_GRZCBENEL);
	vs (!cntr)
		erghea -RABZRZ;
	yratgu = -RSNHYG;
	vs (pbcl_sebz_hfre(cntr, ohs, pbhag))
		tbgb bhg_serr_cntr;

	cntr[pbhag] = '\0';
	ybtvahvq = fvzcyr_fgegbhy(cntr, &gzc, 10);
	vs (gzc == cntr) {
		yratgu = -RVAINY;
		tbgb bhg_serr_cntr;

	}

	/* vf hfrefcnpr gevat gb rkcyvpvgyl HAFRG gur ybtvahvq? */
	vs (ybtvahvq == NHQVG_HVQ_HAFRG) {
		xybtvahvq = VAINYVQ_HVQ;
	} ryfr {
		xybtvahvq = znxr_xhvq(svyr->s_perq->hfre_af, ybtvahvq);
		vs (!hvq_inyvq(xybtvahvq)) {
			yratgu = -RVAINY;
			tbgb bhg_serr_cntr;
		}
	}

	yratgu = nhqvg_frg_ybtvahvq(xybtvahvq);
	vs (yvxryl(yratgu == 0))
		yratgu = pbhag;

bhg_serr_cntr:
	serr_cntr((hafvtarq ybat) cntr);
	erghea yratgu;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_ybtvahvq_bcrengvbaf = {
	.ernq		= cebp_ybtvahvq_ernq,
	.jevgr		= cebp_ybtvahvq_jevgr,
	.yyfrrx		= trarevp_svyr_yyfrrx,
};

fgngvp ffvmr_g cebp_frffvbavq_ernq(fgehpg svyr * svyr, pune __hfre * ohs,
				  fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg vabqr * vabqr = svyr_vabqr(svyr);
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(vabqr);
	ffvmr_g yratgu;
	pune gzcohs[GZCOHSYRA];

	vs (!gnfx)
		erghea -RFEPU;
	yratgu = fpacevags(gzcohs, GZCOHSYRA, "%h",
				nhqvg_trg_frffvbavq(gnfx));
	chg_gnfx_fgehpg(gnfx);
	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, gzcohs, yratgu);
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_frffvbavq_bcrengvbaf = {
	.ernq		= cebp_frffvbavq_ernq,
	.yyfrrx		= trarevp_svyr_yyfrrx,
};
#raqvs

#vsqrs PBASVT_SNHYG_VAWRPGVBA
fgngvp ffvmr_g cebp_snhyg_vawrpg_ernq(fgehpg svyr * svyr, pune __hfre * ohs,
				      fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	pune ohssre[CEBP_AHZOHS];
	fvmr_g yra;
	vag znxr_vg_snvy;

	vs (!gnfx)
		erghea -RFEPU;
	znxr_vg_snvy = gnfx->znxr_vg_snvy;
	chg_gnfx_fgehpg(gnfx);

	yra = facevags(ohssre, fvmrbs(ohssre), "%v\a", znxr_vg_snvy);

	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, ohssre, yra);
}

fgngvp ffvmr_g cebp_snhyg_vawrpg_jevgr(fgehpg svyr * svyr,
			pbafg pune __hfre * ohs, fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx;
	pune ohssre[CEBP_AHZOHS], *raq;
	vag znxr_vg_snvy;

	vs (!pncnoyr(PNC_FLF_ERFBHEPR))
		erghea -RCREZ;
	zrzfrg(ohssre, 0, fvmrbs(ohssre));
	vs (pbhag > fvmrbs(ohssre) - 1)
		pbhag = fvmrbs(ohssre) - 1;
	vs (pbcl_sebz_hfre(ohssre, ohs, pbhag))
		erghea -RSNHYG;
	znxr_vg_snvy = fvzcyr_fgegby(fgefgevc(ohssre), &raq, 0);
	vs (*raq)
		erghea -RVAINY;
	vs (znxr_vg_snvy < 0 || znxr_vg_snvy > 1)
		erghea -RVAINY;

	gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	vs (!gnfx)
		erghea -RFEPU;
	gnfx->znxr_vg_snvy = znxr_vg_snvy;
	chg_gnfx_fgehpg(gnfx);

	erghea pbhag;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_snhyg_vawrpg_bcrengvbaf = {
	.ernq		= cebp_snhyg_vawrpg_ernq,
	.jevgr		= cebp_snhyg_vawrpg_jevgr,
	.yyfrrx		= trarevp_svyr_yyfrrx,
};
#raqvs


#vsqrs PBASVT_FPURQ_QROHT
/*
 * Cevag bhg inevbhf fpurqhyvat eryngrq cre-gnfx svryqf:
 */
fgngvp vag fpurq_fubj(fgehpg frd_svyr *z, ibvq *i)
{
	fgehpg vabqr *vabqr = z->cevingr;
	fgehpg gnfx_fgehpg *c;

	c = trg_cebp_gnfx(vabqr);
	vs (!c)
		erghea -RFEPU;
	cebp_fpurq_fubj_gnfx(c, z);

	chg_gnfx_fgehpg(c);

	erghea 0;
}

fgngvp ffvmr_g
fpurq_jevgr(fgehpg svyr *svyr, pbafg pune __hfre *ohs,
	    fvmr_g pbhag, ybss_g *bssfrg)
{
	fgehpg vabqr *vabqr = svyr_vabqr(svyr);
	fgehpg gnfx_fgehpg *c;

	c = trg_cebp_gnfx(vabqr);
	vs (!c)
		erghea -RFEPU;
	cebp_fpurq_frg_gnfx(c);

	chg_gnfx_fgehpg(c);

	erghea pbhag;
}

fgngvp vag fpurq_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyc)
{
	erghea fvatyr_bcra(svyc, fpurq_fubj, vabqr);
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_cvq_fpurq_bcrengvbaf = {
	.bcra		= fpurq_bcra,
	.ernq		= frd_ernq,
	.jevgr		= fpurq_jevgr,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= fvatyr_eryrnfr,
};

#raqvs

#vsqrs PBASVT_FPURQ_NHGBTEBHC
/*
 * Cevag bhg nhgbtebhc eryngrq vasbezngvba:
 */
fgngvp vag fpurq_nhgbtebhc_fubj(fgehpg frd_svyr *z, ibvq *i)
{
	fgehpg vabqr *vabqr = z->cevingr;
	fgehpg gnfx_fgehpg *c;

	c = trg_cebp_gnfx(vabqr);
	vs (!c)
		erghea -RFEPU;
	cebp_fpurq_nhgbtebhc_fubj_gnfx(c, z);

	chg_gnfx_fgehpg(c);

	erghea 0;
}

fgngvp ffvmr_g
fpurq_nhgbtebhc_jevgr(fgehpg svyr *svyr, pbafg pune __hfre *ohs,
	    fvmr_g pbhag, ybss_g *bssfrg)
{
	fgehpg vabqr *vabqr = svyr_vabqr(svyr);
	fgehpg gnfx_fgehpg *c;
	pune ohssre[CEBP_AHZOHS];
	vag avpr;
	vag ree;

	zrzfrg(ohssre, 0, fvmrbs(ohssre));
	vs (pbhag > fvmrbs(ohssre) - 1)
		pbhag = fvmrbs(ohssre) - 1;
	vs (pbcl_sebz_hfre(ohssre, ohs, pbhag))
		erghea -RSNHYG;

	ree = xfgegbvag(fgefgevc(ohssre), 0, &avpr);
	vs (ree < 0)
		erghea ree;

	c = trg_cebp_gnfx(vabqr);
	vs (!c)
		erghea -RFEPU;

	ree = cebp_fpurq_nhgbtebhc_frg_avpr(c, avpr);
	vs (ree)
		pbhag = ree;

	chg_gnfx_fgehpg(c);

	erghea pbhag;
}

fgngvp vag fpurq_nhgbtebhc_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyc)
{
	vag erg;

	erg = fvatyr_bcra(svyc, fpurq_nhgbtebhc_fubj, AHYY);
	vs (!erg) {
		fgehpg frd_svyr *z = svyc->cevingr_qngn;

		z->cevingr = vabqr;
	}
	erghea erg;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_cvq_fpurq_nhgbtebhc_bcrengvbaf = {
	.bcra		= fpurq_nhgbtebhc_bcra,
	.ernq		= frd_ernq,
	.jevgr		= fpurq_nhgbtebhc_jevgr,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= fvatyr_eryrnfr,
};

#raqvs /* PBASVT_FPURQ_NHGBTEBHC */

fgngvp ffvmr_g pbzz_jevgr(fgehpg svyr *svyr, pbafg pune __hfre *ohs,
				fvmr_g pbhag, ybss_g *bssfrg)
{
	fgehpg vabqr *vabqr = svyr_vabqr(svyr);
	fgehpg gnfx_fgehpg *c;
	pune ohssre[GNFX_PBZZ_YRA];
	pbafg fvmr_g znkyra = fvmrbs(ohssre) - 1;

	zrzfrg(ohssre, 0, fvmrbs(ohssre));
	vs (pbcl_sebz_hfre(ohssre, ohs, pbhag > znkyra ? znkyra : pbhag))
		erghea -RSNHYG;

	c = trg_cebp_gnfx(vabqr);
	vs (!c)
		erghea -RFEPU;

	vs (fnzr_guernq_tebhc(pheerag, c))
		frg_gnfx_pbzz(c, ohssre);
	ryfr
		pbhag = -RVAINY;

	chg_gnfx_fgehpg(c);

	erghea pbhag;
}

fgngvp vag pbzz_fubj(fgehpg frd_svyr *z, ibvq *i)
{
	fgehpg vabqr *vabqr = z->cevingr;
	fgehpg gnfx_fgehpg *c;

	c = trg_cebp_gnfx(vabqr);
	vs (!c)
		erghea -RFEPU;

	gnfx_ybpx(c);
	frd_cevags(z, "%f\a", c->pbzz);
	gnfx_haybpx(c);

	chg_gnfx_fgehpg(c);

	erghea 0;
}

fgngvp vag pbzz_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyc)
{
	erghea fvatyr_bcra(svyc, pbzz_fubj, vabqr);
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_cvq_frg_pbzz_bcrengvbaf = {
	.bcra		= pbzz_bcra,
	.ernq		= frd_ernq,
	.jevgr		= pbzz_jevgr,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= fvatyr_eryrnfr,
};

fgngvp vag cebp_rkr_yvax(fgehpg qragel *qragel, fgehpg cngu *rkr_cngu)
{
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg zz_fgehpg *zz;
	fgehpg svyr *rkr_svyr;

	gnfx = trg_cebp_gnfx(qragel->q_vabqr);
	vs (!gnfx)
		erghea -RABRAG;
	zz = trg_gnfx_zz(gnfx);
	chg_gnfx_fgehpg(gnfx);
	vs (!zz)
		erghea -RABRAG;
	rkr_svyr = trg_zz_rkr_svyr(zz);
	zzchg(zz);
	vs (rkr_svyr) {
		*rkr_cngu = rkr_svyr->s_cngu;
		cngu_trg(&rkr_svyr->s_cngu);
		schg(rkr_svyr);
		erghea 0;
	} ryfr
		erghea -RABRAG;
}

fgngvp ibvq *cebp_cvq_sbyybj_yvax(fgehpg qragel *qragel, fgehpg anzrvqngn *aq)
{
	fgehpg vabqr *vabqr = qragel->q_vabqr;
	fgehpg cngu cngu;
	vag reebe = -RNPPRF;

	/* Ner jr nyybjrq gb fabbc ba gur gnfxf svyr qrfpevcgbef? */
	vs (!cebp_sq_npprff_nyybjrq(vabqr))
		tbgb bhg;

	reebe = CEBP_V(vabqr)->bc.cebp_trg_yvax(qragel, &cngu);
	vs (reebe)
		tbgb bhg;

	aq_whzc_yvax(aq, &cngu);
	erghea AHYY;
bhg:
	erghea REE_CGE(reebe);
}

fgngvp vag qb_cebp_ernqyvax(fgehpg cngu *cngu, pune __hfre *ohssre, vag ohsyra)
{
	pune *gzc = (pune*)__trg_serr_cntr(TSC_GRZCBENEL);
	pune *cnguanzr;
	vag yra;

	vs (!gzc)
		erghea -RABZRZ;

	cnguanzr = q_cngu(cngu, gzc, CNTR_FVMR);
	yra = CGE_REE(cnguanzr);
	vs (VF_REE(cnguanzr))
		tbgb bhg;
	yra = gzc + CNTR_FVMR - 1 - cnguanzr;

	vs (yra > ohsyra)
		yra = ohsyra;
	vs (pbcl_gb_hfre(ohssre, cnguanzr, yra))
		yra = -RSNHYG;
 bhg:
	serr_cntr((hafvtarq ybat)gzc);
	erghea yra;
}

fgngvp vag cebp_cvq_ernqyvax(fgehpg qragel * qragel, pune __hfre * ohssre, vag ohsyra)
{
	vag reebe = -RNPPRF;
	fgehpg vabqr *vabqr = qragel->q_vabqr;
	fgehpg cngu cngu;

	/* Ner jr nyybjrq gb fabbc ba gur gnfxf svyr qrfpevcgbef? */
	vs (!cebp_sq_npprff_nyybjrq(vabqr))
		tbgb bhg;

	reebe = CEBP_V(vabqr)->bc.cebp_trg_yvax(qragel, &cngu);
	vs (reebe)
		tbgb bhg;

	reebe = qb_cebp_ernqyvax(&cngu, ohssre, ohsyra);
	cngu_chg(&cngu);
bhg:
	erghea reebe;
}

pbafg fgehpg vabqr_bcrengvbaf cebp_cvq_yvax_vabqr_bcrengvbaf = {
	.ernqyvax	= cebp_cvq_ernqyvax,
	.sbyybj_yvax	= cebp_cvq_sbyybj_yvax,
	.frgngge	= cebp_frgngge,
};


/* ohvyqvat na vabqr */

fgehpg vabqr *cebp_cvq_znxr_vabqr(fgehpg fhcre_oybpx * fo, fgehpg gnfx_fgehpg *gnfx)
{
	fgehpg vabqr * vabqr;
	fgehpg cebp_vabqr *rv;
	pbafg fgehpg perq *perq;

	/* Jr arrq n arj vabqr */

	vabqr = arj_vabqr(fo);
	vs (!vabqr)
		tbgb bhg;

	/* Pbzzba fghss */
	rv = CEBP_V(vabqr);
	vabqr->v_vab = trg_arkg_vab();
	vabqr->v_zgvzr = vabqr->v_ngvzr = vabqr->v_pgvzr = PHEERAG_GVZR;
	vabqr->v_bc = &cebp_qrs_vabqr_bcrengvbaf;

	/*
	 * teno gur ersrerapr gb gnfx.
	 */
	rv->cvq = trg_gnfx_cvq(gnfx, CVQGLCR_CVQ);
	vs (!rv->cvq)
		tbgb bhg_haybpx;

	vs (gnfx_qhzcnoyr(gnfx)) {
		eph_ernq_ybpx();
		perq = __gnfx_perq(gnfx);
		vabqr->v_hvq = perq->rhvq;
		vabqr->v_tvq = perq->rtvq;
		eph_ernq_haybpx();
	}
	frphevgl_gnfx_gb_vabqr(gnfx, vabqr);

bhg:
	erghea vabqr;

bhg_haybpx:
	vchg(vabqr);
	erghea AHYY;
}

vag cvq_trgngge(fgehpg isfzbhag *zag, fgehpg qragel *qragel, fgehpg xfgng *fgng)
{
	fgehpg vabqr *vabqr = qragel->q_vabqr;
	fgehpg gnfx_fgehpg *gnfx;
	pbafg fgehpg perq *perq;
	fgehpg cvq_anzrfcnpr *cvq = qragel->q_fo->f_sf_vasb;

	trarevp_svyyngge(vabqr, fgng);

	eph_ernq_ybpx();
	fgng->hvq = TYBONY_EBBG_HVQ;
	fgng->tvq = TYBONY_EBBG_TVQ;
	gnfx = cvq_gnfx(cebp_cvq(vabqr), CVQGLCR_CVQ);
	vs (gnfx) {
		vs (!unf_cvq_crezvffvbaf(cvq, gnfx, 2)) {
			eph_ernq_haybpx();
			/*
			 * Guvf qbrfa'g cerirag yrneavat jurgure CVQ rkvfgf,
			 * vg bayl znxrf trgngge() pbafvfgrag jvgu ernqqve().
			 */
			erghea -RABRAG;
		}
		vs ((vabqr->v_zbqr == (F_VSQVE|F_VEHTB|F_VKHTB)) ||
		    gnfx_qhzcnoyr(gnfx)) {
			perq = __gnfx_perq(gnfx);
			fgng->hvq = perq->rhvq;
			fgng->tvq = perq->rtvq;
		}
	}
	eph_ernq_haybpx();
	erghea 0;
}

/* qragel fghss */

/*
 *	Rkprcgvbany pnfr: abeznyyl jr ner abg nyybjrq gb haunfu n ohfl
 * qverpgbel. Va guvf pnfr, ubjrire, jr pna qb vg - ab nyvnfvat ceboyrzf
 * qhr gb gur jnl jr gerng vabqrf.
 *
 * Erjevgr gur vabqr'f bjarefuvcf urer orpnhfr gur bjavat gnfx znl unir
 * cresbezrq n frghvq(), rgp.
 *
 * Orsber gur /cebp/cvq/fgnghf svyr jnf perngrq gur bayl jnl gb ernq
 * gur rssrpgvir hvq bs n /cebprff jnf gb fgng /cebp/cvq.  Ernqvat
 * /cebp/cvq/fgnghf vf fybj rabhtu gung cebpcf naq bgure cnpxntrf
 * xrcg fgngvat /cebp/cvq.  Gb xrrc gur ehyrf va /cebp fvzcyr V unir
 * znqr guvf nccyl gb nyy cre cebprff jbeyq ernqnoyr naq rkrphgnoyr
 * qverpgbevrf.
 */
vag cvq_erinyvqngr(fgehpg qragel *qragel, hafvtarq vag syntf)
{
	fgehpg vabqr *vabqr;
	fgehpg gnfx_fgehpg *gnfx;
	pbafg fgehpg perq *perq;

	vs (syntf & YBBXHC_EPH)
		erghea -RPUVYQ;

	vabqr = qragel->q_vabqr;
	gnfx = trg_cebp_gnfx(vabqr);

	vs (gnfx) {
		vs ((vabqr->v_zbqr == (F_VSQVE|F_VEHTB|F_VKHTB)) ||
		    gnfx_qhzcnoyr(gnfx)) {
			eph_ernq_ybpx();
			perq = __gnfx_perq(gnfx);
			vabqr->v_hvq = perq->rhvq;
			vabqr->v_tvq = perq->rtvq;
			eph_ernq_haybpx();
		} ryfr {
			vabqr->v_hvq = TYBONY_EBBG_HVQ;
			vabqr->v_tvq = TYBONY_EBBG_TVQ;
		}
		vabqr->v_zbqr &= ~(F_VFHVQ | F_VFTVQ);
		frphevgl_gnfx_gb_vabqr(gnfx, vabqr);
		chg_gnfx_fgehpg(gnfx);
		erghea 1;
	}
	q_qebc(qragel);
	erghea 0;
}

fgngvp vayvar obby cebp_vabqr_vf_qrnq(fgehpg vabqr *vabqr)
{
	erghea !cebp_cvq(vabqr)->gnfxf[CVQGLCR_CVQ].svefg;
}

vag cvq_qryrgr_qragel(pbafg fgehpg qragel *qragel)
{
	/* Vf gur gnfx jr ercerfrag qrnq?
	 * Vs fb, gura qba'g chg gur qragel ba gur yeh yvfg,
	 * xvyy vg vzzrqvngryl.
	 */
	erghea cebp_vabqr_vf_qrnq(qragel->q_vabqr);
}

pbafg fgehpg qragel_bcrengvbaf cvq_qragel_bcrengvbaf =
{
	.q_erinyvqngr	= cvq_erinyvqngr,
	.q_qryrgr	= cvq_qryrgr_qragel,
};

/* Ybbxhcf */

/*
 * Svyy n qverpgbel ragel.
 *
 * Vs cbffvoyr perngr gur qpnpur ragel naq qrevir bhe vabqr ahzore naq
 * svyr glcr sebz qpnpur ragel.
 *
 * Fvapr nyy bs gur cebp vabqr ahzoref ner qlanzvpnyyl trarengrq, gur vabqr
 * ahzoref qb abg rkvfg hagvy gur vabqr vf pnpur.  Guvf zrnaf perngvat gur
 * gur qpnpur ragel va ernqqve vf arprffnel gb xrrc gur vabqr ahzoref
 * ercbegrq ol ernqqve va flap jvgu gur vabqr ahzoref ercbegrq
 * ol fgng.
 */
obby cebp_svyy_pnpur(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk,
	pbafg pune *anzr, vag yra,
	vafgnagvngr_g vafgnagvngr, fgehpg gnfx_fgehpg *gnfx, pbafg ibvq *cge)
{
	fgehpg qragel *puvyq, *qve = svyr->s_cngu.qragel;
	fgehpg dfge danzr = DFGE_VAVG(anzr, yra);
	fgehpg vabqr *vabqr;
	hafvtarq glcr;
	vab_g vab;

	puvyq = q_unfu_naq_ybbxhc(qve, &danzr);
	vs (!puvyq) {
		puvyq = q_nyybp(qve, &danzr);
		vs (!puvyq)
			tbgb raq_vafgnagvngr;
		vs (vafgnagvngr(qve->q_vabqr, puvyq, gnfx, cge) < 0) {
			qchg(puvyq);
			tbgb raq_vafgnagvngr;
		}
	}
	vabqr = puvyq->q_vabqr;
	vab = vabqr->v_vab;
	glcr = vabqr->v_zbqr >> 12;
	qchg(puvyq);
	erghea qve_rzvg(pgk, anzr, yra, vab, glcr);

raq_vafgnagvngr:
	erghea qve_rzvg(pgk, anzr, yra, 1, QG_HAXABJA);
}

#vsqrs PBASVT_PURPXCBVAG_ERFGBER

/*
 * qanzr_gb_izn_nqqe - zncf n qragel anzr vagb gjb hafvtarq ybatf
 * juvpu ercerfrag izn fgneg naq raq nqqerffrf.
 */
fgngvp vag qanzr_gb_izn_nqqe(fgehpg qragel *qragel,
			     hafvtarq ybat *fgneg, hafvtarq ybat *raq)
{
	vs (ffpnas(qragel->q_anzr.anzr, "%yk-%yk", fgneg, raq) != 2)
		erghea -RVAINY;

	erghea 0;
}

fgngvp vag znc_svyrf_q_erinyvqngr(fgehpg qragel *qragel, hafvtarq vag syntf)
{
	hafvtarq ybat iz_fgneg, iz_raq;
	obby rknpg_izn_rkvfgf = snyfr;
	fgehpg zz_fgehpg *zz = AHYY;
	fgehpg gnfx_fgehpg *gnfx;
	pbafg fgehpg perq *perq;
	fgehpg vabqr *vabqr;
	vag fgnghf = 0;

	vs (syntf & YBBXHC_EPH)
		erghea -RPUVYQ;

	vs (!pncnoyr(PNC_FLF_NQZVA)) {
		fgnghf = -RCREZ;
		tbgb bhg_abgnfx;
	}

	vabqr = qragel->q_vabqr;
	gnfx = trg_cebp_gnfx(vabqr);
	vs (!gnfx)
		tbgb bhg_abgnfx;

	zz = zz_npprff(gnfx, CGENPR_ZBQR_ERNQ);
	vs (VF_REE_BE_AHYY(zz))
		tbgb bhg;

	vs (!qanzr_gb_izn_nqqe(qragel, &iz_fgneg, &iz_raq)) {
		qbja_ernq(&zz->zznc_frz);
		rknpg_izn_rkvfgf = !!svaq_rknpg_izn(zz, iz_fgneg, iz_raq);
		hc_ernq(&zz->zznc_frz);
	}

	zzchg(zz);

	vs (rknpg_izn_rkvfgf) {
		vs (gnfx_qhzcnoyr(gnfx)) {
			eph_ernq_ybpx();
			perq = __gnfx_perq(gnfx);
			vabqr->v_hvq = perq->rhvq;
			vabqr->v_tvq = perq->rtvq;
			eph_ernq_haybpx();
		} ryfr {
			vabqr->v_hvq = TYBONY_EBBG_HVQ;
			vabqr->v_tvq = TYBONY_EBBG_TVQ;
		}
		frphevgl_gnfx_gb_vabqr(gnfx, vabqr);
		fgnghf = 1;
	}

bhg:
	chg_gnfx_fgehpg(gnfx);

bhg_abgnfx:
	vs (fgnghf <= 0)
		q_qebc(qragel);

	erghea fgnghf;
}

fgngvp pbafg fgehpg qragel_bcrengvbaf gvq_znc_svyrf_qragel_bcrengvbaf = {
	.q_erinyvqngr	= znc_svyrf_q_erinyvqngr,
	.q_qryrgr	= cvq_qryrgr_qragel,
};

fgngvp vag cebp_znc_svyrf_trg_yvax(fgehpg qragel *qragel, fgehpg cngu *cngu)
{
	hafvtarq ybat iz_fgneg, iz_raq;
	fgehpg iz_nern_fgehpg *izn;
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg zz_fgehpg *zz;
	vag ep;

	ep = -RABRAG;
	gnfx = trg_cebp_gnfx(qragel->q_vabqr);
	vs (!gnfx)
		tbgb bhg;

	zz = trg_gnfx_zz(gnfx);
	chg_gnfx_fgehpg(gnfx);
	vs (!zz)
		tbgb bhg;

	ep = qanzr_gb_izn_nqqe(qragel, &iz_fgneg, &iz_raq);
	vs (ep)
		tbgb bhg_zzchg;

	ep = -RABRAG;
	qbja_ernq(&zz->zznc_frz);
	izn = svaq_rknpg_izn(zz, iz_fgneg, iz_raq);
	vs (izn && izn->iz_svyr) {
		*cngu = izn->iz_svyr->s_cngu;
		cngu_trg(cngu);
		ep = 0;
	}
	hc_ernq(&zz->zznc_frz);

bhg_zzchg:
	zzchg(zz);
bhg:
	erghea ep;
}

fgehpg znc_svyrf_vasb {
	szbqr_g		zbqr;
	hafvtarq ybat	yra;
	hafvtarq pune	anzr[4*fvmrbs(ybat)+2]; /* znk: %yk-%yk\0 */
};

fgngvp vag
cebp_znc_svyrf_vafgnagvngr(fgehpg vabqr *qve, fgehpg qragel *qragel,
			   fgehpg gnfx_fgehpg *gnfx, pbafg ibvq *cge)
{
	szbqr_g zbqr = (szbqr_g)(hafvtarq ybat)cge;
	fgehpg cebp_vabqr *rv;
	fgehpg vabqr *vabqr;

	vabqr = cebp_cvq_znxr_vabqr(qve->v_fo, gnfx);
	vs (!vabqr)
		erghea -RABRAG;

	rv = CEBP_V(vabqr);
	rv->bc.cebp_trg_yvax = cebp_znc_svyrf_trg_yvax;

	vabqr->v_bc = &cebp_cvq_yvax_vabqr_bcrengvbaf;
	vabqr->v_fvmr = 64;
	vabqr->v_zbqr = F_VSYAX;

	vs (zbqr & SZBQR_ERNQ)
		vabqr->v_zbqr |= F_VEHFE;
	vs (zbqr & SZBQR_JEVGR)
		vabqr->v_zbqr |= F_VJHFE;

	q_frg_q_bc(qragel, &gvq_znc_svyrf_qragel_bcrengvbaf);
	q_nqq(qragel, vabqr);

	erghea 0;
}

fgngvp fgehpg qragel *cebp_znc_svyrf_ybbxhc(fgehpg vabqr *qve,
		fgehpg qragel *qragel, hafvtarq vag syntf)
{
	hafvtarq ybat iz_fgneg, iz_raq;
	fgehpg iz_nern_fgehpg *izn;
	fgehpg gnfx_fgehpg *gnfx;
	vag erfhyg;
	fgehpg zz_fgehpg *zz;

	erfhyg = -RCREZ;
	vs (!pncnoyr(PNC_FLF_NQZVA))
		tbgb bhg;

	erfhyg = -RABRAG;
	gnfx = trg_cebp_gnfx(qve);
	vs (!gnfx)
		tbgb bhg;

	erfhyg = -RNPPRF;
	vs (!cgenpr_znl_npprff(gnfx, CGENPR_ZBQR_ERNQ))
		tbgb bhg_chg_gnfx;

	erfhyg = -RABRAG;
	vs (qanzr_gb_izn_nqqe(qragel, &iz_fgneg, &iz_raq))
		tbgb bhg_chg_gnfx;

	zz = trg_gnfx_zz(gnfx);
	vs (!zz)
		tbgb bhg_chg_gnfx;

	qbja_ernq(&zz->zznc_frz);
	izn = svaq_rknpg_izn(zz, iz_fgneg, iz_raq);
	vs (!izn)
		tbgb bhg_ab_izn;

	vs (izn->iz_svyr)
		erfhyg = cebp_znc_svyrf_vafgnagvngr(qve, qragel, gnfx,
				(ibvq *)(hafvtarq ybat)izn->iz_svyr->s_zbqr);

bhg_ab_izn:
	hc_ernq(&zz->zznc_frz);
	zzchg(zz);
bhg_chg_gnfx:
	chg_gnfx_fgehpg(gnfx);
bhg:
	erghea REE_CGE(erfhyg);
}

fgngvp pbafg fgehpg vabqr_bcrengvbaf cebp_znc_svyrf_vabqr_bcrengvbaf = {
	.ybbxhc		= cebp_znc_svyrf_ybbxhc,
	.crezvffvba	= cebp_sq_crezvffvba,
	.frgngge	= cebp_frgngge,
};

fgngvp vag
cebp_znc_svyrf_ernqqve(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk)
{
	fgehpg iz_nern_fgehpg *izn;
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg zz_fgehpg *zz;
	hafvtarq ybat ae_svyrf, cbf, v;
	fgehpg syrk_neenl *sn = AHYY;
	fgehpg znc_svyrf_vasb vasb;
	fgehpg znc_svyrf_vasb *c;
	vag erg;

	erg = -RCREZ;
	vs (!pncnoyr(PNC_FLF_NQZVA))
		tbgb bhg;

	erg = -RABRAG;
	gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	vs (!gnfx)
		tbgb bhg;

	erg = -RNPPRF;
	vs (!cgenpr_znl_npprff(gnfx, CGENPR_ZBQR_ERNQ))
		tbgb bhg_chg_gnfx;

	erg = 0;
	vs (!qve_rzvg_qbgf(svyr, pgk))
		tbgb bhg_chg_gnfx;

	zz = trg_gnfx_zz(gnfx);
	vs (!zz)
		tbgb bhg_chg_gnfx;
	qbja_ernq(&zz->zznc_frz);

	ae_svyrf = 0;

	/*
	 * Jr arrq gjb cnffrf urer:
	 *
	 *  1) Pbyyrpg iznf bs znccrq svyrf jvgu zznc_frz gnxra
	 *  2) Eryrnfr zznc_frz naq vafgnagvngr ragevrf
	 *
	 * bgurejvfr jr trg ybpxqrc pbzcynvarq, fvapr svyyqve()
	 * ebhgvar zvtug erdhver zznc_frz gnxra va zvtug_snhyg().
	 */

	sbe (izn = zz->zznc, cbf = 2; izn; izn = izn->iz_arkg) {
		vs (izn->iz_svyr && ++cbf > pgk->cbf)
			ae_svyrf++;
	}

	vs (ae_svyrf) {
		sn = syrk_neenl_nyybp(fvmrbs(vasb), ae_svyrf,
					TSC_XREARY);
		vs (!sn || syrk_neenl_cernyybp(sn, 0, ae_svyrf,
						TSC_XREARY)) {
			erg = -RABZRZ;
			vs (sn)
				syrk_neenl_serr(sn);
			hc_ernq(&zz->zznc_frz);
			zzchg(zz);
			tbgb bhg_chg_gnfx;
		}
		sbe (v = 0, izn = zz->zznc, cbf = 2; izn;
				izn = izn->iz_arkg) {
			vs (!izn->iz_svyr)
				pbagvahr;
			vs (++cbf <= pgk->cbf)
				pbagvahr;

			vasb.zbqr = izn->iz_svyr->s_zbqr;
			vasb.yra = facevags(vasb.anzr,
					fvmrbs(vasb.anzr), "%yk-%yk",
					izn->iz_fgneg, izn->iz_raq);
			vs (syrk_neenl_chg(sn, v++, &vasb, TSC_XREARY))
				OHT();
		}
	}
	hc_ernq(&zz->zznc_frz);

	sbe (v = 0; v < ae_svyrf; v++) {
		c = syrk_neenl_trg(sn, v);
		vs (!cebp_svyy_pnpur(svyr, pgk,
				      c->anzr, c->yra,
				      cebp_znc_svyrf_vafgnagvngr,
				      gnfx,
				      (ibvq *)(hafvtarq ybat)c->zbqr))
			oernx;
		pgk->cbf++;
	}
	vs (sn)
		syrk_neenl_serr(sn);
	zzchg(zz);

bhg_chg_gnfx:
	chg_gnfx_fgehpg(gnfx);
bhg:
	erghea erg;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_znc_svyrf_bcrengvbaf = {
	.ernq		= trarevp_ernq_qve,
	.vgrengr	= cebp_znc_svyrf_ernqqve,
	.yyfrrx		= qrsnhyg_yyfrrx,
};

fgehpg gvzref_cevingr {
	fgehpg cvq *cvq;
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg fvtunaq_fgehpg *fvtunaq;
	fgehpg cvq_anzrfcnpr *af;
	hafvtarq ybat syntf;
};

fgngvp ibvq *gvzref_fgneg(fgehpg frd_svyr *z, ybss_g *cbf)
{
	fgehpg gvzref_cevingr *gc = z->cevingr;

	gc->gnfx = trg_cvq_gnfx(gc->cvq, CVQGLCR_CVQ);
	vs (!gc->gnfx)
		erghea REE_CGE(-RFEPU);

	gc->fvtunaq = ybpx_gnfx_fvtunaq(gc->gnfx, &gc->syntf);
	vs (!gc->fvtunaq)
		erghea REE_CGE(-RFEPU);

	erghea frd_yvfg_fgneg(&gc->gnfx->fvtany->cbfvk_gvzref, *cbf);
}

fgngvp ibvq *gvzref_arkg(fgehpg frd_svyr *z, ibvq *i, ybss_g *cbf)
{
	fgehpg gvzref_cevingr *gc = z->cevingr;
	erghea frd_yvfg_arkg(i, &gc->gnfx->fvtany->cbfvk_gvzref, cbf);
}

fgngvp ibvq gvzref_fgbc(fgehpg frd_svyr *z, ibvq *i)
{
	fgehpg gvzref_cevingr *gc = z->cevingr;

	vs (gc->fvtunaq) {
		haybpx_gnfx_fvtunaq(gc->gnfx, &gc->syntf);
		gc->fvtunaq = AHYY;
	}

	vs (gc->gnfx) {
		chg_gnfx_fgehpg(gc->gnfx);
		gc->gnfx = AHYY;
	}
}

fgngvp vag fubj_gvzre(fgehpg frd_svyr *z, ibvq *i)
{
	fgehpg x_vgvzre *gvzre;
	fgehpg gvzref_cevingr *gc = z->cevingr;
	vag abgvsl;
	fgngvp pune *afge[] = {
		[FVTRI_FVTANY] = "fvtany",
		[FVTRI_ABAR] = "abar",
		[FVTRI_GUERNQ] = "guernq",
	};

	gvzre = yvfg_ragel((fgehpg yvfg_urnq *)i, fgehpg x_vgvzre, yvfg);
	abgvsl = gvzre->vg_fvtri_abgvsl;

	frd_cevags(z, "VQ: %q\a", gvzre->vg_vq);
	frd_cevags(z, "fvtany: %q/%c\a", gvzre->fvtd->vasb.fv_fvtab,
			gvzre->fvtd->vasb.fv_inyhr.fviny_cge);
	frd_cevags(z, "abgvsl: %f/%f.%q\a",
		afge[abgvsl & ~FVTRI_GUERNQ_VQ],
		(abgvsl & FVTRI_GUERNQ_VQ) ? "gvq" : "cvq",
		cvq_ae_af(gvzre->vg_cvq, gc->af));
	frd_cevags(z, "PybpxVQ: %q\a", gvzre->vg_pybpx);

	erghea 0;
}

fgngvp pbafg fgehpg frd_bcrengvbaf cebp_gvzref_frd_bcf = {
	.fgneg	= gvzref_fgneg,
	.arkg	= gvzref_arkg,
	.fgbc	= gvzref_fgbc,
	.fubj	= fubj_gvzre,
};

fgngvp vag cebp_gvzref_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	fgehpg gvzref_cevingr *gc;

	gc = __frd_bcra_cevingr(svyr, &cebp_gvzref_frd_bcf,
			fvmrbs(fgehpg gvzref_cevingr));
	vs (!gc)
		erghea -RABZRZ;

	gc->cvq = cebp_cvq(vabqr);
	gc->af = vabqr->v_fo->f_sf_vasb;
	erghea 0;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_gvzref_bcrengvbaf = {
	.bcra		= cebp_gvzref_bcra,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= frd_eryrnfr_cevingr,
};
#raqvs /* PBASVT_PURPXCBVAG_ERFGBER */

fgngvp vag cebp_cvqrag_vafgnagvngr(fgehpg vabqr *qve,
	fgehpg qragel *qragel, fgehpg gnfx_fgehpg *gnfx, pbafg ibvq *cge)
{
	pbafg fgehpg cvq_ragel *c = cge;
	fgehpg vabqr *vabqr;
	fgehpg cebp_vabqr *rv;

	vabqr = cebp_cvq_znxr_vabqr(qve->v_fo, gnfx);
	vs (!vabqr)
		tbgb bhg;

	rv = CEBP_V(vabqr);
	vabqr->v_zbqr = c->zbqr;
	vs (F_VFQVE(vabqr->v_zbqr))
		frg_ayvax(vabqr, 2);	/* Hfr trgngge gb svk vs arprffnel */
	vs (c->vbc)
		vabqr->v_bc = c->vbc;
	vs (c->sbc)
		vabqr->v_sbc = c->sbc;
	rv->bc = c->bc;
	q_frg_q_bc(qragel, &cvq_qragel_bcrengvbaf);
	q_nqq(qragel, vabqr);
	/* Pybfr gur enpr bs gur cebprff qlvat orsber jr erghea gur qragel */
	vs (cvq_erinyvqngr(qragel, 0))
		erghea 0;
bhg:
	erghea -RABRAG;
}

fgngvp fgehpg qragel *cebp_cvqrag_ybbxhc(fgehpg vabqr *qve, 
					 fgehpg qragel *qragel,
					 pbafg fgehpg cvq_ragel *ragf,
					 hafvtarq vag aragf)
{
	vag reebe;
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(qve);
	pbafg fgehpg cvq_ragel *c, *ynfg;

	reebe = -RABRAG;

	vs (!gnfx)
		tbgb bhg_ab_gnfx;

	/*
	 * Lrf, vg qbrf abg fpnyr. Naq vg fubhyq abg. Qba'g nqq
	 * arj ragevrf vagb /cebp/<gtvq>/ jvgubhg irel tbbq ernfbaf.
	 */
	ynfg = &ragf[aragf - 1];
	sbe (c = ragf; c <= ynfg; c++) {
		vs (c->yra != qragel->q_anzr.yra)
			pbagvahr;
		vs (!zrzpzc(qragel->q_anzr.anzr, c->anzr, c->yra))
			oernx;
	}
	vs (c > ynfg)
		tbgb bhg;

	reebe = cebp_cvqrag_vafgnagvngr(qve, qragel, gnfx, c);
bhg:
	chg_gnfx_fgehpg(gnfx);
bhg_ab_gnfx:
	erghea REE_CGE(reebe);
}

fgngvp vag cebp_cvqrag_ernqqve(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk,
		pbafg fgehpg cvq_ragel *ragf, hafvtarq vag aragf)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	pbafg fgehpg cvq_ragel *c;

	vs (!gnfx)
		erghea -RABRAG;

	vs (!qve_rzvg_qbgf(svyr, pgk))
		tbgb bhg;

	vs (pgk->cbf >= aragf + 2)
		tbgb bhg;

	sbe (c = ragf + (pgk->cbf - 2); c <= ragf + aragf - 1; c++) {
		vs (!cebp_svyy_pnpur(svyr, pgk, c->anzr, c->yra,
				cebp_cvqrag_vafgnagvngr, gnfx, c))
			oernx;
		pgk->cbf++;
	}
bhg:
	chg_gnfx_fgehpg(gnfx);
	erghea 0;
}

#vsqrs PBASVT_FRPHEVGL
fgngvp ffvmr_g cebp_cvq_ngge_ernq(fgehpg svyr * svyr, pune __hfre * ohs,
				  fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg vabqr * vabqr = svyr_vabqr(svyr);
	pune *c = AHYY;
	ffvmr_g yratgu;
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(vabqr);

	vs (!gnfx)
		erghea -RFEPU;

	yratgu = frphevgl_trgcebpngge(gnfx,
				      (pune*)svyr->s_cngu.qragel->q_anzr.anzr,
				      &c);
	chg_gnfx_fgehpg(gnfx);
	vs (yratgu > 0)
		yratgu = fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, c, yratgu);
	xserr(c);
	erghea yratgu;
}

fgngvp ffvmr_g cebp_cvq_ngge_jevgr(fgehpg svyr * svyr, pbafg pune __hfre * ohs,
				   fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg vabqr * vabqr = svyr_vabqr(svyr);
	pune *cntr;
	ffvmr_g yratgu;
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(vabqr);

	yratgu = -RFEPU;
	vs (!gnfx)
		tbgb bhg_ab_gnfx;
	vs (pbhag > CNTR_FVMR)
		pbhag = CNTR_FVMR;

	/* Ab cnegvny jevgrf. */
	yratgu = -RVAINY;
	vs (*ccbf != 0)
		tbgb bhg;

	yratgu = -RABZRZ;
	cntr = (pune*)__trg_serr_cntr(TSC_GRZCBENEL);
	vs (!cntr)
		tbgb bhg;

	yratgu = -RSNHYG;
	vs (pbcl_sebz_hfre(cntr, ohs, pbhag))
		tbgb bhg_serr;

	/* Thneq ntnvafg nqirefr cgenpr vagrenpgvba */
	yratgu = zhgrk_ybpx_vagreehcgvoyr(&gnfx->fvtany->perq_thneq_zhgrk);
	vs (yratgu < 0)
		tbgb bhg_serr;

	yratgu = frphevgl_frgcebpngge(gnfx,
				      (pune*)svyr->s_cngu.qragel->q_anzr.anzr,
				      (ibvq*)cntr, pbhag);
	zhgrk_haybpx(&gnfx->fvtany->perq_thneq_zhgrk);
bhg_serr:
	serr_cntr((hafvtarq ybat) cntr);
bhg:
	chg_gnfx_fgehpg(gnfx);
bhg_ab_gnfx:
	erghea yratgu;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_cvq_ngge_bcrengvbaf = {
	.ernq		= cebp_cvq_ngge_ernq,
	.jevgr		= cebp_cvq_ngge_jevgr,
	.yyfrrx		= trarevp_svyr_yyfrrx,
};

fgngvp pbafg fgehpg cvq_ragel ngge_qve_fghss[] = {
	ERT("pheerag",    F_VEHTB|F_VJHTB, cebp_cvq_ngge_bcrengvbaf),
	ERT("ceri",       F_VEHTB,	   cebp_cvq_ngge_bcrengvbaf),
	ERT("rkrp",       F_VEHTB|F_VJHTB, cebp_cvq_ngge_bcrengvbaf),
	ERT("sfperngr",   F_VEHTB|F_VJHTB, cebp_cvq_ngge_bcrengvbaf),
	ERT("xrlperngr",  F_VEHTB|F_VJHTB, cebp_cvq_ngge_bcrengvbaf),
	ERT("fbpxperngr", F_VEHTB|F_VJHTB, cebp_cvq_ngge_bcrengvbaf),
};

fgngvp vag cebp_ngge_qve_ernqqve(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk)
{
	erghea cebp_cvqrag_ernqqve(svyr, pgk, 
				   ngge_qve_fghss, NEENL_FVMR(ngge_qve_fghss));
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_ngge_qve_bcrengvbaf = {
	.ernq		= trarevp_ernq_qve,
	.vgrengr	= cebp_ngge_qve_ernqqve,
	.yyfrrx		= qrsnhyg_yyfrrx,
};

fgngvp fgehpg qragel *cebp_ngge_qve_ybbxhc(fgehpg vabqr *qve,
				fgehpg qragel *qragel, hafvtarq vag syntf)
{
	erghea cebp_cvqrag_ybbxhc(qve, qragel,
				  ngge_qve_fghss, NEENL_FVMR(ngge_qve_fghss));
}

fgngvp pbafg fgehpg vabqr_bcrengvbaf cebp_ngge_qve_vabqr_bcrengvbaf = {
	.ybbxhc		= cebp_ngge_qve_ybbxhc,
	.trgngge	= cvq_trgngge,
	.frgngge	= cebp_frgngge,
};

#raqvs

#vsqrs PBASVT_RYS_PBER
fgngvp ffvmr_g cebp_pberqhzc_svygre_ernq(fgehpg svyr *svyr, pune __hfre *ohs,
					 fvmr_g pbhag, ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	fgehpg zz_fgehpg *zz;
	pune ohssre[CEBP_AHZOHS];
	fvmr_g yra;
	vag erg;

	vs (!gnfx)
		erghea -RFEPU;

	erg = 0;
	zz = trg_gnfx_zz(gnfx);
	vs (zz) {
		yra = facevags(ohssre, fvmrbs(ohssre), "%08yk\a",
			       ((zz->syntf & ZZS_QHZC_SVYGRE_ZNFX) >>
				ZZS_QHZC_SVYGRE_FUVSG));
		zzchg(zz);
		erg = fvzcyr_ernq_sebz_ohssre(ohs, pbhag, ccbf, ohssre, yra);
	}

	chg_gnfx_fgehpg(gnfx);

	erghea erg;
}

fgngvp ffvmr_g cebp_pberqhzc_svygre_jevgr(fgehpg svyr *svyr,
					  pbafg pune __hfre *ohs,
					  fvmr_g pbhag,
					  ybss_g *ccbf)
{
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg zz_fgehpg *zz;
	pune ohssre[CEBP_AHZOHS], *raq;
	hafvtarq vag iny;
	vag erg;
	vag v;
	hafvtarq ybat znfx;

	erg = -RSNHYG;
	zrzfrg(ohssre, 0, fvmrbs(ohssre));
	vs (pbhag > fvmrbs(ohssre) - 1)
		pbhag = fvmrbs(ohssre) - 1;
	vs (pbcl_sebz_hfre(ohssre, ohs, pbhag))
		tbgb bhg_ab_gnfx;

	erg = -RVAINY;
	iny = (hafvtarq vag)fvzcyr_fgegbhy(ohssre, &raq, 0);
	vs (*raq == '\a')
		raq++;
	vs (raq - ohssre == 0)
		tbgb bhg_ab_gnfx;

	erg = -RFEPU;
	gnfx = trg_cebp_gnfx(svyr_vabqr(svyr));
	vs (!gnfx)
		tbgb bhg_ab_gnfx;

	erg = raq - ohssre;
	zz = trg_gnfx_zz(gnfx);
	vs (!zz)
		tbgb bhg_ab_zz;

	sbe (v = 0, znfx = 1; v < ZZS_QHZC_SVYGRE_OVGF; v++, znfx <<= 1) {
		vs (iny & znfx)
			frg_ovg(v + ZZS_QHZC_SVYGRE_FUVSG, &zz->syntf);
		ryfr
			pyrne_ovg(v + ZZS_QHZC_SVYGRE_FUVSG, &zz->syntf);
	}

	zzchg(zz);
 bhg_ab_zz:
	chg_gnfx_fgehpg(gnfx);
 bhg_ab_gnfx:
	erghea erg;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_pberqhzc_svygre_bcrengvbaf = {
	.ernq		= cebp_pberqhzc_svygre_ernq,
	.jevgr		= cebp_pberqhzc_svygre_jevgr,
	.yyfrrx		= trarevp_svyr_yyfrrx,
};
#raqvs

#vsqrs PBASVT_GNFX_VB_NPPBHAGVAT
fgngvp vag qb_vb_nppbhagvat(fgehpg gnfx_fgehpg *gnfx, pune *ohssre, vag jubyr)
{
	fgehpg gnfx_vb_nppbhagvat nppg = gnfx->vbnp;
	hafvtarq ybat syntf;
	vag erfhyg;

	erfhyg = zhgrk_ybpx_xvyynoyr(&gnfx->fvtany->perq_thneq_zhgrk);
	vs (erfhyg)
		erghea erfhyg;

	vs (!cgenpr_znl_npprff(gnfx, CGENPR_ZBQR_ERNQ)) {
		erfhyg = -RNPPRF;
		tbgb bhg_haybpx;
	}

	vs (jubyr && ybpx_gnfx_fvtunaq(gnfx, &syntf)) {
		fgehpg gnfx_fgehpg *g = gnfx;

		gnfx_vb_nppbhagvat_nqq(&nppg, &gnfx->fvtany->vbnp);
		juvyr_rnpu_guernq(gnfx, g)
			gnfx_vb_nppbhagvat_nqq(&nppg, &g->vbnp);

		haybpx_gnfx_fvtunaq(gnfx, &syntf);
	}
	erfhyg = fcevags(ohssre,
			"epune: %yyh\a"
			"jpune: %yyh\a"
			"flfpe: %yyh\a"
			"flfpj: %yyh\a"
			"ernq_olgrf: %yyh\a"
			"jevgr_olgrf: %yyh\a"
			"pnapryyrq_jevgr_olgrf: %yyh\a",
			(hafvtarq ybat ybat)nppg.epune,
			(hafvtarq ybat ybat)nppg.jpune,
			(hafvtarq ybat ybat)nppg.flfpe,
			(hafvtarq ybat ybat)nppg.flfpj,
			(hafvtarq ybat ybat)nppg.ernq_olgrf,
			(hafvtarq ybat ybat)nppg.jevgr_olgrf,
			(hafvtarq ybat ybat)nppg.pnapryyrq_jevgr_olgrf);
bhg_haybpx:
	zhgrk_haybpx(&gnfx->fvtany->perq_thneq_zhgrk);
	erghea erfhyg;
}

fgngvp vag cebp_gvq_vb_nppbhagvat(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	erghea qb_vb_nppbhagvat(gnfx, ohssre, 0);
}

fgngvp vag cebp_gtvq_vb_nppbhagvat(fgehpg gnfx_fgehpg *gnfx, pune *ohssre)
{
	erghea qb_vb_nppbhagvat(gnfx, ohssre, 1);
}
#raqvs /* PBASVT_GNFX_VB_NPPBHAGVAT */

#vsqrs PBASVT_HFRE_AF
fgngvp vag cebp_vq_znc_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr,
	fgehpg frd_bcrengvbaf *frd_bcf)
{
	fgehpg hfre_anzrfcnpr *af = AHYY;
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg frd_svyr *frd;
	vag erg = -RVAINY;

	gnfx = trg_cebp_gnfx(vabqr);
	vs (gnfx) {
		eph_ernq_ybpx();
		af = trg_hfre_af(gnfx_perq_kkk(gnfx, hfre_af));
		eph_ernq_haybpx();
		chg_gnfx_fgehpg(gnfx);
	}
	vs (!af)
		tbgb ree;

	erg = frd_bcra(svyr, frd_bcf);
	vs (erg)
		tbgb ree_chg_af;

	frd = svyr->cevingr_qngn;
	frd->cevingr = af;

	erghea 0;
ree_chg_af:
	chg_hfre_af(af);
ree:
	erghea erg;
}

fgngvp vag cebp_vq_znc_eryrnfr(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	fgehpg frd_svyr *frd = svyr->cevingr_qngn;
	fgehpg hfre_anzrfcnpr *af = frd->cevingr;
	chg_hfre_af(af);
	erghea frd_eryrnfr(vabqr, svyr);
}

fgngvp vag cebp_hvq_znc_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	erghea cebp_vq_znc_bcra(vabqr, svyr, &cebp_hvq_frd_bcrengvbaf);
}

fgngvp vag cebp_tvq_znc_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	erghea cebp_vq_znc_bcra(vabqr, svyr, &cebp_tvq_frd_bcrengvbaf);
}

fgngvp vag cebp_cebwvq_znc_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	erghea cebp_vq_znc_bcra(vabqr, svyr, &cebp_cebwvq_frd_bcrengvbaf);
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_hvq_znc_bcrengvbaf = {
	.bcra		= cebp_hvq_znc_bcra,
	.jevgr		= cebp_hvq_znc_jevgr,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= cebp_vq_znc_eryrnfr,
};

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_tvq_znc_bcrengvbaf = {
	.bcra		= cebp_tvq_znc_bcra,
	.jevgr		= cebp_tvq_znc_jevgr,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= cebp_vq_znc_eryrnfr,
};

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_cebwvq_znc_bcrengvbaf = {
	.bcra		= cebp_cebwvq_znc_bcra,
	.jevgr		= cebp_cebwvq_znc_jevgr,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= cebp_vq_znc_eryrnfr,
};

fgngvp vag cebp_frgtebhcf_bcra(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	fgehpg hfre_anzrfcnpr *af = AHYY;
	fgehpg gnfx_fgehpg *gnfx;
	vag erg;

	erg = -RFEPU;
	gnfx = trg_cebp_gnfx(vabqr);
	vs (gnfx) {
		eph_ernq_ybpx();
		af = trg_hfre_af(gnfx_perq_kkk(gnfx, hfre_af));
		eph_ernq_haybpx();
		chg_gnfx_fgehpg(gnfx);
	}
	vs (!af)
		tbgb ree;

	vs (svyr->s_zbqr & SZBQR_JEVGR) {
		erg = -RNPPRF;
		vs (!af_pncnoyr(af, PNC_FLF_NQZVA))
			tbgb ree_chg_af;
	}

	erg = fvatyr_bcra(svyr, &cebp_frgtebhcf_fubj, af);
	vs (erg)
		tbgb ree_chg_af;

	erghea 0;
ree_chg_af:
	chg_hfre_af(af);
ree:
	erghea erg;
}

fgngvp vag cebp_frgtebhcf_eryrnfr(fgehpg vabqr *vabqr, fgehpg svyr *svyr)
{
	fgehpg frd_svyr *frd = svyr->cevingr_qngn;
	fgehpg hfre_anzrfcnpr *af = frd->cevingr;
	vag erg = fvatyr_eryrnfr(vabqr, svyr);
	chg_hfre_af(af);
	erghea erg;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_frgtebhcf_bcrengvbaf = {
	.bcra		= cebp_frgtebhcf_bcra,
	.jevgr		= cebp_frgtebhcf_jevgr,
	.ernq		= frd_ernq,
	.yyfrrx		= frd_yfrrx,
	.eryrnfr	= cebp_frgtebhcf_eryrnfr,
};
#raqvs /* PBASVT_HFRE_AF */

fgngvp vag cebp_cvq_crefbanyvgl(fgehpg frd_svyr *z, fgehpg cvq_anzrfcnpr *af,
				fgehpg cvq *cvq, fgehpg gnfx_fgehpg *gnfx)
{
	vag ree = ybpx_genpr(gnfx);
	vs (!ree) {
		frd_cevags(z, "%08k\a", gnfx->crefbanyvgl);
		haybpx_genpr(gnfx);
	}
	erghea ree;
}

fgngvp vag cebp_cvq_vq(fgehpg frd_svyr *z, fgehpg cvq_anzrfcnpr *af,
		       fgehpg cvq *cvq, fgehpg gnfx_fgehpg *gnfx)
{
	frd_cevags(z, "%yyh\a", gnfx->vq);
	erghea 0;
}

/*
 * Guernq tebhcf
 */
fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_gnfx_bcrengvbaf;
fgngvp pbafg fgehpg vabqr_bcrengvbaf cebp_gnfx_vabqr_bcrengvbaf;

fgngvp pbafg fgehpg cvq_ragel gtvq_onfr_fghss[] = {
	QVE("gnfx",       F_VEHTB|F_VKHTB, cebp_gnfx_vabqr_bcrengvbaf, cebp_gnfx_bcrengvbaf),
	QVE("sq",         F_VEHFE|F_VKHFE, cebp_sq_vabqr_bcrengvbaf, cebp_sq_bcrengvbaf),
#vsqrs PBASVT_PURPXCBVAG_ERFGBER
	QVE("znc_svyrf",  F_VEHFE|F_VKHFE, cebp_znc_svyrf_vabqr_bcrengvbaf, cebp_znc_svyrf_bcrengvbaf),
#raqvs
	QVE("sqvasb",     F_VEHFE|F_VKHFE, cebp_sqvasb_vabqr_bcrengvbaf, cebp_sqvasb_bcrengvbaf),
	QVE("af",	  F_VEHFE|F_VKHTB, cebp_af_qve_vabqr_bcrengvbaf, cebp_af_qve_bcrengvbaf),
#vsqrs PBASVT_ARG
	QVE("arg",        F_VEHTB|F_VKHTB, cebp_arg_vabqr_bcrengvbaf, cebp_arg_bcrengvbaf),
#raqvs
	ERT("raiveba",    F_VEHFE, cebp_raiveba_bcrengvbaf),
	VAS("nhki",       F_VEHFE, cebp_cvq_nhki),
	BAR("fgnghf",     F_VEHTB, cebp_cvq_fgnghf),
	BAR("crefbanyvgl", F_VEHFE, cebp_cvq_crefbanyvgl),
	VAS("yvzvgf",	  F_VEHTB, cebp_cvq_yvzvgf),
#vsqrs PBASVT_FPURQ_QROHT
	ERT("fpurq",      F_VEHTB|F_VJHFE, cebp_cvq_fpurq_bcrengvbaf),
#raqvs
#vsqrs PBASVT_FPURQ_NHGBTEBHC
	ERT("nhgbtebhc",  F_VEHTB|F_VJHFE, cebp_cvq_fpurq_nhgbtebhc_bcrengvbaf),
#raqvs
	ERT("pbzz",      F_VEHTB|F_VJHFE, cebp_cvq_frg_pbzz_bcrengvbaf),
#vsqrs PBASVT_UNIR_NEPU_GENPRUBBX
	VAS("flfpnyy",    F_VEHFE, cebp_cvq_flfpnyy),
#raqvs
	VAS("pzqyvar",    F_VEHTB, cebp_cvq_pzqyvar),
	BAR("fgng",       F_VEHTB, cebp_gtvq_fgng),
	BAR("fgngz",      F_VEHTB, cebp_cvq_fgngz),
	ERT("zncf",       F_VEHTB, cebp_cvq_zncf_bcrengvbaf),
#vsqrs PBASVT_AHZN
	ERT("ahzn_zncf",  F_VEHTB, cebp_cvq_ahzn_zncf_bcrengvbaf),
#raqvs
	ERT("zrz",        F_VEHFE|F_VJHFE, cebp_zrz_bcrengvbaf),
	YAX("pjq",        cebp_pjq_yvax),
	YAX("ebbg",       cebp_ebbg_yvax),
	YAX("rkr",        cebp_rkr_yvax),
	ERT("zbhagf",     F_VEHTB, cebp_zbhagf_bcrengvbaf),
	ERT("zbhagvasb",  F_VEHTB, cebp_zbhagvasb_bcrengvbaf),
	ERT("zbhagfgngf", F_VEHFE, cebp_zbhagfgngf_bcrengvbaf),
#vsqrs PBASVT_CEBP_CNTR_ZBAVGBE
	ERT("pyrne_ersf", F_VJHFE, cebp_pyrne_ersf_bcrengvbaf),
	ERT("fzncf",      F_VEHTB, cebp_cvq_fzncf_bcrengvbaf),
	ERT("cntrznc",    F_VEHFE, cebp_cntrznc_bcrengvbaf),
#raqvs
#vsqrs PBASVT_FRPHEVGL
	QVE("ngge",       F_VEHTB|F_VKHTB, cebp_ngge_qve_vabqr_bcrengvbaf, cebp_ngge_qve_bcrengvbaf),
#raqvs
#vsqrs PBASVT_XNYYFLZF
	VAS("jpuna",      F_VEHTB, cebp_cvq_jpuna),
#raqvs
#vsqrs PBASVT_FGNPXGENPR
	BAR("fgnpx",      F_VEHFE, cebp_cvq_fgnpx),
#raqvs
#vsqrs PBASVT_FPURQFGNGF
	VAS("fpurqfgng",  F_VEHTB, cebp_cvq_fpurqfgng),
#raqvs
#vsqrs PBASVT_YNGRAPLGBC
	ERT("yngrapl",  F_VEHTB, cebp_yfgngf_bcrengvbaf),
#raqvs
#vsqrs PBASVT_CEBP_CVQ_PCHFRG
	ERT("pchfrg",     F_VEHTB, cebp_pchfrg_bcrengvbaf),
#raqvs
#vsqrs PBASVT_PTEBHCF
	ERT("ptebhc",  F_VEHTB, cebp_ptebhc_bcrengvbaf),
#raqvs
	VAS("bbz_fpber",  F_VEHTB, cebp_bbz_fpber),
	ERT("bbz_nqw",    F_VEHTB|F_VJHFE, cebp_bbz_nqw_bcrengvbaf),
	ERT("bbz_fpber_nqw", F_VEHTB|F_VJHFE, cebp_bbz_fpber_nqw_bcrengvbaf),
#vsqrs PBASVT_NHQVGFLFPNYY
	ERT("ybtvahvq",   F_VJHFE|F_VEHTB, cebp_ybtvahvq_bcrengvbaf),
	ERT("frffvbavq",  F_VEHTB, cebp_frffvbavq_bcrengvbaf),
#raqvs
#vsqrs PBASVT_SNHYG_VAWRPGVBA
	ERT("znxr-vg-snvy", F_VEHTB|F_VJHFE, cebp_snhyg_vawrpg_bcrengvbaf),
#raqvs
#vsqrs PBASVT_RYS_PBER
	ERT("pberqhzc_svygre", F_VEHTB|F_VJHFE, cebp_pberqhzc_svygre_bcrengvbaf),
#raqvs
#vsqrs PBASVT_GNFX_VB_NPPBHAGVAT
	VAS("vb",	F_VEHFE, cebp_gtvq_vb_nppbhagvat),
#raqvs
#vsqrs PBASVT_UNEQJNYY
	VAS("uneqjnyy",   F_VEHTB, cebp_cvq_uneqjnyy),
#raqvs
#vsqrs PBASVT_HFRE_AF
	ERT("hvq_znc",    F_VEHTB|F_VJHFE, cebp_hvq_znc_bcrengvbaf),
	ERT("tvq_znc",    F_VEHTB|F_VJHFE, cebp_tvq_znc_bcrengvbaf),
	ERT("cebwvq_znc", F_VEHTB|F_VJHFE, cebp_cebwvq_znc_bcrengvbaf),
	ERT("frgtebhcf",  F_VEHTB|F_VJHFE, cebp_frgtebhcf_bcrengvbaf),
#raqvs
#vsqrs PBASVT_PURPXCBVAG_ERFGBER
	ERT("gvzref",	  F_VEHTB, cebp_gvzref_bcrengvbaf),
#raqvs
	BAR("vq", F_VEHTB, cebp_cvq_vq),
};

fgngvp vag cebp_gtvq_onfr_ernqqve(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk)
{
	erghea cebp_cvqrag_ernqqve(svyr, pgk,
				   gtvq_onfr_fghss, NEENL_FVMR(gtvq_onfr_fghss));
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_gtvq_onfr_bcrengvbaf = {
	.ernq		= trarevp_ernq_qve,
	.vgrengr	= cebp_gtvq_onfr_ernqqve,
	.yyfrrx		= qrsnhyg_yyfrrx,
};

fgngvp fgehpg qragel *cebp_gtvq_onfr_ybbxhc(fgehpg vabqr *qve, fgehpg qragel *qragel, hafvtarq vag syntf)
{
	erghea cebp_cvqrag_ybbxhc(qve, qragel,
				  gtvq_onfr_fghss, NEENL_FVMR(gtvq_onfr_fghss));
}

fgngvp pbafg fgehpg vabqr_bcrengvbaf cebp_gtvq_onfr_vabqr_bcrengvbaf = {
	.ybbxhc		= cebp_gtvq_onfr_ybbxhc,
	.trgngge	= cvq_trgngge,
	.frgngge	= cebp_frgngge,
	.crezvffvba	= cebp_cvq_crezvffvba,
};

fgngvp ibvq cebp_syhfu_gnfx_zag(fgehpg isfzbhag *zag, cvq_g cvq, cvq_g gtvq)
{
	fgehpg qragel *qragel, *yrnqre, *qve;
	pune ohs[CEBP_AHZOHS];
	fgehpg dfge anzr;

	anzr.anzr = ohs;
	anzr.yra = facevags(ohs, fvmrbs(ohs), "%q", cvq);
	/* ab ->q_unfu() erwrpgf ba cebpsf */
	qragel = q_unfu_naq_ybbxhc(zag->zag_ebbg, &anzr);
	vs (qragel) {
		fuevax_qpnpur_cnerag(qragel);
		q_qebc(qragel);
		qchg(qragel);
	}

	anzr.anzr = ohs;
	anzr.yra = facevags(ohs, fvmrbs(ohs), "%q", gtvq);
	yrnqre = q_unfu_naq_ybbxhc(zag->zag_ebbg, &anzr);
	vs (!yrnqre)
		tbgb bhg;

	anzr.anzr = "gnfx";
	anzr.yra = fgeyra(anzr.anzr);
	qve = q_unfu_naq_ybbxhc(yrnqre, &anzr);
	vs (!qve)
		tbgb bhg_chg_yrnqre;

	anzr.anzr = ohs;
	anzr.yra = facevags(ohs, fvmrbs(ohs), "%q", cvq);
	qragel = q_unfu_naq_ybbxhc(qve, &anzr);
	vs (qragel) {
		fuevax_qpnpur_cnerag(qragel);
		q_qebc(qragel);
		qchg(qragel);
	}

	qchg(qve);
bhg_chg_yrnqre:
	qchg(yrnqre);
bhg:
	erghea;
}

/**
 * cebp_syhfu_gnfx -  Erzbir qpnpur ragevrf sbe @gnfx sebz gur /cebp qpnpur.
 * @gnfx: gnfx gung fubhyq or syhfurq.
 *
 * Jura syhfuvat qragevrf sebz cebp, bar arrqf gb syhfu gurz sebz tybony
 * cebp (cebp_zag) naq sebz nyy gur anzrfcnprf' cebpf guvf gnfx jnf frra
 * va. Guvf pnyy vf fhccbfrq gb qb nyy bs guvf wbo.
 *
 * Ybbxf va gur qpnpur sbe
 * /cebp/@cvq
 * /cebp/@gtvq/gnfx/@cvq
 * vs rvgure qverpgbel vf cerfrag syhfurf vg naq nyy bs vg'gf puvyqera
 * sebz gur qpnpur.
 *
 * Vg vf fnsr naq ernfbanoyr gb pnpur /cebp ragevrf sbe n gnfx hagvy
 * gung gnfx rkvgf.  Nsgre gung gurl whfg pybt hc gur qpnpur jvgu
 * hfryrff ragevrf, cbffvoyl pnhfvat hfrshy qpnpur ragevrf gb or
 * syhfurq vafgrnq.  Guvf ebhgvar vf cebirq gb syhfu gubfr hfryrff
 * qpnpur ragevrf ng cebprff rkvg gvzr.
 *
 * ABGR: Guvf ebhgvar vf whfg na bcgvzvmngvba fb vg qbrf abg thnenagrr
 *       gung ab qpnpur ragevrf jvyy rkvfg ng cebprff rkvg gvzr vg
 *       whfg znxrf vg irel hayvxryl gung nal jvyy crefvfg.
 */

ibvq cebp_syhfu_gnfx(fgehpg gnfx_fgehpg *gnfx)
{
	vag v;
	fgehpg cvq *cvq, *gtvq;
	fgehpg hcvq *hcvq;

	cvq = gnfx_cvq(gnfx);
	gtvq = gnfx_gtvq(gnfx);

	sbe (v = 0; v <= cvq->yriry; v++) {
		hcvq = &cvq->ahzoref[v];
		cebp_syhfu_gnfx_zag(hcvq->af->cebp_zag, hcvq->ae,
					gtvq->ahzoref[v].ae);
	}
}

fgngvp vag cebp_cvq_vafgnagvngr(fgehpg vabqr *qve,
				   fgehpg qragel * qragel,
				   fgehpg gnfx_fgehpg *gnfx, pbafg ibvq *cge)
{
	fgehpg vabqr *vabqr;

	vabqr = cebp_cvq_znxr_vabqr(qve->v_fo, gnfx);
	vs (!vabqr)
		tbgb bhg;

	vabqr->v_zbqr = F_VSQVE|F_VEHTB|F_VKHTB;
	vabqr->v_bc = &cebp_gtvq_onfr_vabqr_bcrengvbaf;
	vabqr->v_sbc = &cebp_gtvq_onfr_bcrengvbaf;
	vabqr->v_syntf|=F_VZZHGNOYR;

	frg_ayvax(vabqr, 2 + cvq_ragel_pbhag_qvef(gtvq_onfr_fghss,
						  NEENL_FVMR(gtvq_onfr_fghss)));

	q_frg_q_bc(qragel, &cvq_qragel_bcrengvbaf);

	q_nqq(qragel, vabqr);
	/* Pybfr gur enpr bs gur cebprff qlvat orsber jr erghea gur qragel */
	vs (cvq_erinyvqngr(qragel, 0))
		erghea 0;
bhg:
	erghea -RABRAG;
}

fgehpg qragel *cebp_cvq_ybbxhc(fgehpg vabqr *qve, fgehpg qragel * qragel, hafvtarq vag syntf)
{
	vag erfhyg = 0;
	fgehpg gnfx_fgehpg *gnfx;
	hafvtarq gtvq;
	fgehpg cvq_anzrfcnpr *af;

	gtvq = anzr_gb_vag(qragel);
	vs (gtvq == ~0H)
		tbgb bhg;

	af = qragel->q_fo->f_sf_vasb;
	eph_ernq_ybpx();
	gnfx = svaq_gnfx_ol_cvq_af(gtvq, af);
	vs (gnfx)
		trg_gnfx_fgehpg(gnfx);
	eph_ernq_haybpx();
	vs (!gnfx)
		tbgb bhg;

	erfhyg = cebp_cvq_vafgnagvngr(qve, qragel, gnfx, AHYY);
	chg_gnfx_fgehpg(gnfx);
bhg:
	erghea REE_CGE(erfhyg);
}

/*
 * Svaq gur svefg gnfx jvgu gtvq >= gtvq
 *
 */
fgehpg gtvq_vgre {
	hafvtarq vag gtvq;
	fgehpg gnfx_fgehpg *gnfx;
};
fgngvp fgehpg gtvq_vgre arkg_gtvq(fgehpg cvq_anzrfcnpr *af, fgehpg gtvq_vgre vgre)
{
	fgehpg cvq *cvq;

	vs (vgre.gnfx)
		chg_gnfx_fgehpg(vgre.gnfx);
	eph_ernq_ybpx();
ergel:
	vgre.gnfx = AHYY;
	cvq = svaq_tr_cvq(vgre.gtvq, af);
	vs (cvq) {
		vgre.gtvq = cvq_ae_af(cvq, af);
		vgre.gnfx = cvq_gnfx(cvq, CVQGLCR_CVQ);
		/* Jung jr gb xabj vf vs gur cvq jr unir svaq vf gur
		 * cvq bs n guernq_tebhc_yrnqre.  Grfgvat sbe gnfx
		 * orvat n guernq_tebhc_yrnqre vf gur boivbhf guvat
		 * gbqb ohg gurer vf n jvaqbj jura vg snvyf, qhr gb
		 * gur cvq genafsre ybtvp va qr_guernq.
		 *
		 * Fb jr cresbez gur fgenvtug sbejneq grfg bs frrvat
		 * vs gur cvq jr unir sbhaq vf gur cvq bs n guernq
		 * tebhc yrnqre, naq qba'g jbeel vs gur gnfx jr unir
		 * sbhaq qbrfa'g unccra gb or n guernq tebhc yrnqre.
		 * Nf jr qba'g pner va gur pnfr bs ernqqve.
		 */
		vs (!vgre.gnfx || !unf_tebhc_yrnqre_cvq(vgre.gnfx)) {
			vgre.gtvq += 1;
			tbgb ergel;
		}
		trg_gnfx_fgehpg(vgre.gnfx);
	}
	eph_ernq_haybpx();
	erghea vgre;
}

#qrsvar GTVQ_BSSFRG (SVEFG_CEBPRFF_RAGEL + 1)

/* sbe gur /cebp/ qverpgbel vgfrys, nsgre aba-cebprff fghss unf orra qbar */
vag cebp_cvq_ernqqve(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk)
{
	fgehpg gtvq_vgre vgre;
	fgehpg cvq_anzrfcnpr *af = svyr->s_qragel->q_fo->f_sf_vasb;
	ybss_g cbf = pgk->cbf;

	vs (cbf >= CVQ_ZNK_YVZVG + GTVQ_BSSFRG)
		erghea 0;

	vs (cbf == GTVQ_BSSFRG - 1) {
		fgehpg vabqr *vabqr = af->cebp_frys->q_vabqr;
		vs (!qve_rzvg(pgk, "frys", 4, vabqr->v_vab, QG_YAX))
			erghea 0;
		vgre.gtvq = 0;
	} ryfr {
		vgre.gtvq = cbf - GTVQ_BSSFRG;
	}
	vgre.gnfx = AHYY;
	sbe (vgre = arkg_gtvq(af, vgre);
	     vgre.gnfx;
	     vgre.gtvq += 1, vgre = arkg_gtvq(af, vgre)) {
		pune anzr[CEBP_AHZOHS];
		vag yra;
		vs (!unf_cvq_crezvffvbaf(af, vgre.gnfx, 2))
			pbagvahr;

		yra = facevags(anzr, fvmrbs(anzr), "%q", vgre.gtvq);
		pgk->cbf = vgre.gtvq + GTVQ_BSSFRG;
		vs (!cebp_svyy_pnpur(svyr, pgk, anzr, yra,
				     cebp_cvq_vafgnagvngr, vgre.gnfx, AHYY)) {
			chg_gnfx_fgehpg(vgre.gnfx);
			erghea 0;
		}
	}
	pgk->cbf = CVQ_ZNK_YVZVG + GTVQ_BSSFRG;
	erghea 0;
}

/*
 * Gnfxf
 */
fgngvp pbafg fgehpg cvq_ragel gvq_onfr_fghss[] = {
	QVE("sq",        F_VEHFE|F_VKHFE, cebp_sq_vabqr_bcrengvbaf, cebp_sq_bcrengvbaf),
	QVE("sqvasb",    F_VEHFE|F_VKHFE, cebp_sqvasb_vabqr_bcrengvbaf, cebp_sqvasb_bcrengvbaf),
	QVE("af",	 F_VEHFE|F_VKHTB, cebp_af_qve_vabqr_bcrengvbaf, cebp_af_qve_bcrengvbaf),
	ERT("raiveba",   F_VEHFE, cebp_raiveba_bcrengvbaf),
	VAS("nhki",      F_VEHFE, cebp_cvq_nhki),
	BAR("fgnghf",    F_VEHTB, cebp_cvq_fgnghf),
	BAR("crefbanyvgl", F_VEHFE, cebp_cvq_crefbanyvgl),
	VAS("yvzvgf",	 F_VEHTB, cebp_cvq_yvzvgf),
#vsqrs PBASVT_FPURQ_QROHT
	ERT("fpurq",     F_VEHTB|F_VJHFE, cebp_cvq_fpurq_bcrengvbaf),
#raqvs
	ERT("pbzz",      F_VEHTB|F_VJHFE, cebp_cvq_frg_pbzz_bcrengvbaf),
#vsqrs PBASVT_UNIR_NEPU_GENPRUBBX
	VAS("flfpnyy",   F_VEHFE, cebp_cvq_flfpnyy),
#raqvs
	VAS("pzqyvar",   F_VEHTB, cebp_cvq_pzqyvar),
	BAR("fgng",      F_VEHTB, cebp_gvq_fgng),
	BAR("fgngz",     F_VEHTB, cebp_cvq_fgngz),
	ERT("zncf",      F_VEHTB, cebp_gvq_zncf_bcrengvbaf),
#vsqrs PBASVT_PURPXCBVAG_ERFGBER
	ERT("puvyqera",  F_VEHTB, cebp_gvq_puvyqera_bcrengvbaf),
#raqvs
#vsqrs PBASVT_AHZN
	ERT("ahzn_zncf", F_VEHTB, cebp_gvq_ahzn_zncf_bcrengvbaf),
#raqvs
	ERT("zrz",       F_VEHFE|F_VJHFE, cebp_zrz_bcrengvbaf),
	YAX("pjq",       cebp_pjq_yvax),
	YAX("ebbg",      cebp_ebbg_yvax),
	YAX("rkr",       cebp_rkr_yvax),
	ERT("zbhagf",    F_VEHTB, cebp_zbhagf_bcrengvbaf),
	ERT("zbhagvasb",  F_VEHTB, cebp_zbhagvasb_bcrengvbaf),
#vsqrs PBASVT_CEBP_CNTR_ZBAVGBE
	ERT("pyrne_ersf", F_VJHFE, cebp_pyrne_ersf_bcrengvbaf),
	ERT("fzncf",     F_VEHTB, cebp_gvq_fzncf_bcrengvbaf),
	ERT("cntrznc",    F_VEHFE, cebp_cntrznc_bcrengvbaf),
#raqvs
#vsqrs PBASVT_FRPHEVGL
	QVE("ngge",      F_VEHTB|F_VKHTB, cebp_ngge_qve_vabqr_bcrengvbaf, cebp_ngge_qve_bcrengvbaf),
#raqvs
#vsqrs PBASVT_XNYYFLZF
	VAS("jpuna",     F_VEHTB, cebp_cvq_jpuna),
#raqvs
#vsqrs PBASVT_FGNPXGENPR
	BAR("fgnpx",      F_VEHFE, cebp_cvq_fgnpx),
#raqvs
#vsqrs PBASVT_FPURQFGNGF
	VAS("fpurqfgng", F_VEHTB, cebp_cvq_fpurqfgng),
#raqvs
#vsqrs PBASVT_YNGRAPLGBC
	ERT("yngrapl",  F_VEHTB, cebp_yfgngf_bcrengvbaf),
#raqvs
#vsqrs PBASVT_CEBP_CVQ_PCHFRG
	ERT("pchfrg",    F_VEHTB, cebp_pchfrg_bcrengvbaf),
#raqvs
#vsqrs PBASVT_PTEBHCF
	ERT("ptebhc",  F_VEHTB, cebp_ptebhc_bcrengvbaf),
#raqvs
	VAS("bbz_fpber", F_VEHTB, cebp_bbz_fpber),
	ERT("bbz_nqw",   F_VEHTB|F_VJHFE, cebp_bbz_nqw_bcrengvbaf),
	ERT("bbz_fpber_nqw", F_VEHTB|F_VJHFE, cebp_bbz_fpber_nqw_bcrengvbaf),
#vsqrs PBASVT_NHQVGFLFPNYY
	ERT("ybtvahvq",  F_VJHFE|F_VEHTB, cebp_ybtvahvq_bcrengvbaf),
	ERT("frffvbavq",  F_VEHTB, cebp_frffvbavq_bcrengvbaf),
#raqvs
#vsqrs PBASVT_SNHYG_VAWRPGVBA
	ERT("znxr-vg-snvy", F_VEHTB|F_VJHFE, cebp_snhyg_vawrpg_bcrengvbaf),
#raqvs
#vsqrs PBASVT_GNFX_VB_NPPBHAGVAT
	VAS("vb",	F_VEHFE, cebp_gvq_vb_nppbhagvat),
#raqvs
#vsqrs PBASVT_UNEQJNYY
	VAS("uneqjnyy",   F_VEHTB, cebp_cvq_uneqjnyy),
#raqvs
#vsqrs PBASVT_HFRE_AF
	ERT("hvq_znc",    F_VEHTB|F_VJHFE, cebp_hvq_znc_bcrengvbaf),
	ERT("tvq_znc",    F_VEHTB|F_VJHFE, cebp_tvq_znc_bcrengvbaf),
	ERT("cebwvq_znc", F_VEHTB|F_VJHFE, cebp_cebwvq_znc_bcrengvbaf),
	ERT("frgtebhcf",  F_VEHTB|F_VJHFE, cebp_frgtebhcf_bcrengvbaf),
#raqvs
	BAR("vq", F_VEHTB, cebp_cvq_vq),
};

fgngvp vag cebp_gvq_onfr_ernqqve(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk)
{
	erghea cebp_cvqrag_ernqqve(svyr, pgk,
				   gvq_onfr_fghss, NEENL_FVMR(gvq_onfr_fghss));
}

fgngvp fgehpg qragel *cebp_gvq_onfr_ybbxhc(fgehpg vabqr *qve, fgehpg qragel *qragel, hafvtarq vag syntf)
{
	erghea cebp_cvqrag_ybbxhc(qve, qragel,
				  gvq_onfr_fghss, NEENL_FVMR(gvq_onfr_fghss));
}

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_gvq_onfr_bcrengvbaf = {
	.ernq		= trarevp_ernq_qve,
	.vgrengr	= cebp_gvq_onfr_ernqqve,
	.yyfrrx		= qrsnhyg_yyfrrx,
};

fgngvp pbafg fgehpg vabqr_bcrengvbaf cebp_gvq_onfr_vabqr_bcrengvbaf = {
	.ybbxhc		= cebp_gvq_onfr_ybbxhc,
	.trgngge	= cvq_trgngge,
	.frgngge	= cebp_frgngge,
};

fgngvp vag cebp_gnfx_vafgnagvngr(fgehpg vabqr *qve,
	fgehpg qragel *qragel, fgehpg gnfx_fgehpg *gnfx, pbafg ibvq *cge)
{
	fgehpg vabqr *vabqr;
	vabqr = cebp_cvq_znxr_vabqr(qve->v_fo, gnfx);

	vs (!vabqr)
		tbgb bhg;
	vabqr->v_zbqr = F_VSQVE|F_VEHTB|F_VKHTB;
	vabqr->v_bc = &cebp_gvq_onfr_vabqr_bcrengvbaf;
	vabqr->v_sbc = &cebp_gvq_onfr_bcrengvbaf;
	vabqr->v_syntf|=F_VZZHGNOYR;

	frg_ayvax(vabqr, 2 + cvq_ragel_pbhag_qvef(gvq_onfr_fghss,
						  NEENL_FVMR(gvq_onfr_fghss)));

	q_frg_q_bc(qragel, &cvq_qragel_bcrengvbaf);

	q_nqq(qragel, vabqr);
	/* Pybfr gur enpr bs gur cebprff qlvat orsber jr erghea gur qragel */
	vs (cvq_erinyvqngr(qragel, 0))
		erghea 0;
bhg:
	erghea -RABRAG;
}

fgngvp fgehpg qragel *cebp_gnfx_ybbxhc(fgehpg vabqr *qve, fgehpg qragel * qragel, hafvtarq vag syntf)
{
	vag erfhyg = -RABRAG;
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg gnfx_fgehpg *yrnqre = trg_cebp_gnfx(qve);
	hafvtarq gvq;
	fgehpg cvq_anzrfcnpr *af;

	vs (!yrnqre)
		tbgb bhg_ab_gnfx;

	gvq = anzr_gb_vag(qragel);
	vs (gvq == ~0H)
		tbgb bhg;

	af = qragel->q_fo->f_sf_vasb;
	eph_ernq_ybpx();
	gnfx = svaq_gnfx_ol_cvq_af(gvq, af);
	vs (gnfx)
		trg_gnfx_fgehpg(gnfx);
	eph_ernq_haybpx();
	vs (!gnfx)
		tbgb bhg;
	vs (!fnzr_guernq_tebhc(yrnqre, gnfx))
		tbgb bhg_qebc_gnfx;

	erfhyg = cebp_gnfx_vafgnagvngr(qve, qragel, gnfx, AHYY);
bhg_qebc_gnfx:
	chg_gnfx_fgehpg(gnfx);
bhg:
	chg_gnfx_fgehpg(yrnqre);
bhg_ab_gnfx:
	erghea REE_CGE(erfhyg);
}

/*
 * Svaq gur svefg gvq bs n guernq tebhc gb erghea gb hfre fcnpr.
 *
 * Hfhnyyl guvf vf whfg gur guernq tebhc yrnqre, ohg vs gur hfref
 * ohssre jnf gbb fznyy be gurer jnf n frrx vagb gur zvqqyr bs gur
 * qverpgbel jr unir zber jbex gbqb.
 *
 * Va gur pnfr bs n fubeg ernq jr fgneg jvgu svaq_gnfx_ol_cvq.
 *
 * Va gur pnfr bs n frrx jr fgneg jvgu gur yrnqre naq jnyx ae
 * guernqf cnfg vg.
 */
fgngvp fgehpg gnfx_fgehpg *svefg_gvq(fgehpg cvq *cvq, vag gvq, ybss_g s_cbf,
					fgehpg cvq_anzrfcnpr *af)
{
	fgehpg gnfx_fgehpg *cbf, *gnfx;
	hafvtarq ybat ae = s_cbf;

	vs (ae != s_cbf)	/* 32ovg biresybj? */
		erghea AHYY;

	eph_ernq_ybpx();
	gnfx = cvq_gnfx(cvq, CVQGLCR_CVQ);
	vs (!gnfx)
		tbgb snvy;

	/* Nggrzcg gb fgneg jvgu gur gvq bs n guernq */
	vs (gvq && ae) {
		cbf = svaq_gnfx_ol_cvq_af(gvq, af);
		vs (cbf && fnzr_guernq_tebhc(cbf, gnfx))
			tbgb sbhaq;
	}

	/* Vs ae rkprrqf gur ahzore bs guernqf gurer vf abguvat gbqb */
	vs (ae >= trg_ae_guernqf(gnfx))
		tbgb snvy;

	/* Vs jr unira'g sbhaq bhe fgnegvat cynpr lrg fgneg
	 * jvgu gur yrnqre naq jnyx ae guernqf sbejneq.
	 */
	cbf = gnfx = gnfx->tebhc_yrnqre;
	qb {
		vs (!ae--)
			tbgb sbhaq;
	} juvyr_rnpu_guernq(gnfx, cbf);
snvy:
	cbf = AHYY;
	tbgb bhg;
sbhaq:
	trg_gnfx_fgehpg(cbf);
bhg:
	eph_ernq_haybpx();
	erghea cbf;
}

/*
 * Svaq gur arkg guernq va gur guernq yvfg.
 * Erghea AHYY vs gurer vf na reebe be ab arkg guernq.
 *
 * Gur ersrerapr gb gur vachg gnfx_fgehpg vf eryrnfrq.
 */
fgngvp fgehpg gnfx_fgehpg *arkg_gvq(fgehpg gnfx_fgehpg *fgneg)
{
	fgehpg gnfx_fgehpg *cbf = AHYY;
	eph_ernq_ybpx();
	vs (cvq_nyvir(fgneg)) {
		cbf = arkg_guernq(fgneg);
		vs (guernq_tebhc_yrnqre(cbf))
			cbf = AHYY;
		ryfr
			trg_gnfx_fgehpg(cbf);
	}
	eph_ernq_haybpx();
	chg_gnfx_fgehpg(fgneg);
	erghea cbf;
}

/* sbe gur /cebp/GTVQ/gnfx/ qverpgbevrf */
fgngvp vag cebp_gnfx_ernqqve(fgehpg svyr *svyr, fgehpg qve_pbagrkg *pgk)
{
	fgehpg vabqr *vabqr = svyr_vabqr(svyr);
	fgehpg gnfx_fgehpg *gnfx;
	fgehpg cvq_anzrfcnpr *af;
	vag gvq;

	vs (cebp_vabqr_vf_qrnq(vabqr))
		erghea -RABRAG;

	vs (!qve_rzvg_qbgf(svyr, pgk))
		erghea 0;

	/* s_irefvba pnpurf gur gtvq inyhr gung gur ynfg ernqqve pnyy pbhyqa'g
	 * erghea. yfrrx nxn gryyqve nhgbzntvpnyyl erfrgf s_irefvba gb 0.
	 */
	af = svyr->s_qragel->q_fo->f_sf_vasb;
	gvq = (vag)svyr->s_irefvba;
	svyr->s_irefvba = 0;
	sbe (gnfx = svefg_gvq(cebp_cvq(vabqr), gvq, pgk->cbf - 2, af);
	     gnfx;
	     gnfx = arkg_gvq(gnfx), pgk->cbf++) {
		pune anzr[CEBP_AHZOHS];
		vag yra;
		gvq = gnfx_cvq_ae_af(gnfx, af);
		yra = facevags(anzr, fvmrbs(anzr), "%q", gvq);
		vs (!cebp_svyy_pnpur(svyr, pgk, anzr, yra,
				cebp_gnfx_vafgnagvngr, gnfx, AHYY)) {
			/* ergheavat guvf gtvq snvyrq, fnir vg nf gur svefg
			 * cvq sbe gur arkg ernqve pnyy */
			svyr->s_irefvba = (h64)gvq;
			chg_gnfx_fgehpg(gnfx);
			oernx;
		}
	}

	erghea 0;
}

fgngvp vag cebp_gnfx_trgngge(fgehpg isfzbhag *zag, fgehpg qragel *qragel, fgehpg xfgng *fgng)
{
	fgehpg vabqr *vabqr = qragel->q_vabqr;
	fgehpg gnfx_fgehpg *c = trg_cebp_gnfx(vabqr);
	trarevp_svyyngge(vabqr, fgng);

	vs (c) {
		fgng->ayvax += trg_ae_guernqf(c);
		chg_gnfx_fgehpg(c);
	}

	erghea 0;
}

fgngvp pbafg fgehpg vabqr_bcrengvbaf cebp_gnfx_vabqr_bcrengvbaf = {
	.ybbxhc		= cebp_gnfx_ybbxhc,
	.trgngge	= cebp_gnfx_trgngge,
	.frgngge	= cebp_frgngge,
	.crezvffvba	= cebp_cvq_crezvffvba,
};

fgngvp pbafg fgehpg svyr_bcrengvbaf cebp_gnfx_bcrengvbaf = {
	.ernq		= trarevp_ernq_qve,
	.vgrengr	= cebp_gnfx_ernqqve,
	.yyfrrx		= qrsnhyg_yyfrrx,
};
