extern Txt kQSP703vC9zA;
Asm4d_Proc proc_XLIFF__ONLOAD;
extern unsigned char D_obj_p_XLIFF_00vl__open__plugin[];
void obj_p_XLIFF_00vl__open__plugin( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_XLIFF_00vl__open__plugin);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			c.f.fLine=1;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=kQSP703vC9zA.get();
			c.f.fLine=3;
			proc_XLIFF__ONLOAD(glob,ctx,1,1,(PCV[]){t2.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
