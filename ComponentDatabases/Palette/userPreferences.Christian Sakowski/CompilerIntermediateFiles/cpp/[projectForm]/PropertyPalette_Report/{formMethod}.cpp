extern Txt Kbackground;
extern unsigned char D_form_p_PropertyPalette__Report[];
void form_p_PropertyPalette__Report( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_form_p_PropertyPalette__Report);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (1!=t0.get()) goto _3;
		}
		c.f.fLine=4;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kbackground.cv(),Long(14344165).cv(),Long(14344165).cv()},4,628)) goto _0;
		g->Check(ctx);
		goto _2;
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
