Asm4d_Proc proc_HMREP__PALETTE__DROP;
extern unsigned char D_proc_CALLBACK[];
void proc_CALLBACK( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_CALLBACK);
	if (!ctx->doingAbort) try {
		Long lvl__event;
		Long lvl__area;
		Long lvl__result;
		new ( outResult) Long();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__event=Parm<Long>(inParams,inNbParam,2).get();
		lvl__result=0;
		if (29!=lvl__event.get()) goto _3;
		{
			Long t1;
			t1=lvl__area.get();
			Long t2;
			c.f.fLine=11;
			proc_HMREP__PALETTE__DROP(glob,ctx,1,1,(PCV[]){t1.cv()},t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _2;
_3:
_2:
		Res<Long>(outResult)=lvl__result.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
