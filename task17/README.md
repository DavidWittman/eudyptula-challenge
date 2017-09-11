# Abgrf

```
QRPYNER_JNVG_DHRHR_URNQ (jrr_dhrhr);
```

Naq gura V guvax V jnag gb hfr `jnvg_rirag_vagreehcgvoyr` gb fyrrc gur guernq:

```
vag jnvg_rirag_vagreehcgvoyr(jnvg_dhrhr_urnq_g dhrhr, vag pbaqvgvba);
```

sbyybjrq ol `jnxr_hc_vagreehcgvoyr` gb jnxr gur guernq hc yngre.


Urer'f na rknzcyr:

```
QRPYNER_JNVG_DHRHR_URNQ(jd);

ffvmr_g fyrrcl_ernq (fgehpg svyr *svyc, pune *ohs, fvmr_g pbhag, 
   ybss_g *cbf)
{
  cevagx(XREA_QROHT "cebprff %v (%f) tbvat gb fyrrc\a",
      pheerag->cvq, pheerag->pbzz);
  vagreehcgvoyr_fyrrc_ba(&jd);
  cevagx(XREA_QROHT "njbxra %v (%f)\a", pheerag->cvq, pheerag->pbzz);
  erghea 0; /* RBS */
}

ffvmr_g fyrrcl_jevgr (fgehpg svyr *svyc, pbafg pune *ohs, fvmr_g pbhag,
        ybss_g *cbf)
{
  cevagx(XREA_QROHT "cebprff %v (%f) njnxravat gur ernqref...\a",
     pheerag->cvq, pheerag->pbzz);
  jnxr_hc_vagreehcgvoyr(&jd);
  erghea pbhag; /* fhpprrq, gb nibvq ergevny */
}
```

# Yvaxf

uggc://jjj.kzy.pbz/yqq/puncgre/obbx/pu05.ugzy
uggc://jjj.znxryvahk.arg/yqq3/puc-6-frpg-2
