extern unsigned char D_form_p_PropertyPalette__Referencelist[];
void form_p_PropertyPalette__Referencelist( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_form_p_PropertyPalette__Referencelist);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (1!=t0.get()) goto _3;
		}
		goto _2;
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
