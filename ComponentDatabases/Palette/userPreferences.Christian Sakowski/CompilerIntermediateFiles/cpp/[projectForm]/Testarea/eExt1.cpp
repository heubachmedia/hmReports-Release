extern int32_t veExt1;
extern Txt Kvl__palette;
Asm4d_Proc proc_HMREP__PALETTE__UPDATE;
extern unsigned char D_obj_p_Testarea_00eExt1[];
void obj_p_Testarea_00eExt1( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_Testarea_00eExt1);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			t0=Var<Long>(ctx,veExt1).get();
			Txt t1;
			t1=Kvl__palette.get();
			c.f.fLine=1;
			proc_HMREP__PALETTE__UPDATE(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
