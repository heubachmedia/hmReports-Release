extern unsigned char D_obj_p_Testarea_00bbtn5[];
void obj_p_Testarea_00bbtn5( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_Testarea_00bbtn5);
	if (!ctx->doingAbort) try {
		c.f.fLine=1;
		if (g->Call(ctx,(PCV[]){nullptr,Long(1).cv()},1,247)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
