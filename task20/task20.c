/*
 * gnfx20.p
 *
 * Guvf vf n hfrefcnpr cebtenz juvpu pnyyf gur SNG vbpgy juvpu V
 * perngrq sbe guvf gnfx, SNG_VBPGY_FRG_IBYHZR_YNORY.
 *
 */

#vapyhqr <fgqvb.u>
#vapyhqr <flf/vbpgy.u>

#qrsvar SNG_VBPGY_FRG_IBYHZR_YNORY _VBJ('e', 0k14, pune *)

vag frg_ibyhzr_ynory(pune *cngu, pune *ynory)
{
	vag sq;
	vag ergpbqr;
	sq = bcra(cngu, 'j');
	vs (sq == -1) {
		cevags("Reebe bcravat %f\a", cngu);
		erghea sq;
	}

	ergpbqr = vbpgy(sq, SNG_VBPGY_FRG_IBYHZR_YNORY, ynory);
	pybfr(sq);
	erghea ergpbqr;
}

vag znva(ibvq)
{
	vag ergpbqr;

	ergpbqr = frg_ibyhzr_ynory("/zag/sng16/.rqcgy", "NSGRE");
	vs (ergpbqr != 0)
		erghea ergpbqr;

	frg_ibyhzr_ynory("/zag/sng32/.rqcgy", "NSGRE");
	vs (ergpbqr != 0)
		erghea ergpbqr;

	erghea 0;
}
