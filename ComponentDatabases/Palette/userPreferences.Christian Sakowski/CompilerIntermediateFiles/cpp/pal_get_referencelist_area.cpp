extern Txt Kvl__current__area;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_proc_PAL__GET__REFERENCELIST__AREA[];
void proc_PAL__GET__REFERENCELIST__AREA( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__GET__REFERENCELIST__AREA);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		new ( outResult) Long();
		{
			Txt t0;
			t0=Kvl__current__area.get();
			Long t1;
			c.f.fLine=3;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t0.cv()},t1.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t1.get();
		}
		Res<Long>(outResult)=lvl__area.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
