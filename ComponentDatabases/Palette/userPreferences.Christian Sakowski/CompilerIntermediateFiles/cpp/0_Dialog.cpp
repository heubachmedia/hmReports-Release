extern Txt KTestarea;
extern unsigned char D_proc_0__DIALOG[];
void proc_0__DIALOG( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_0__DIALOG);
	if (!ctx->doingAbort) try {
		Long lvl__ref;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv(),KTestarea.cv()},1,675)) goto _0;
			g->Check(ctx);
			lvl__ref=t0.get();
		}
		c.f.fLine=4;
		if (g->Call(ctx,(PCV[]){nullptr,KTestarea.cv()},1,40)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
