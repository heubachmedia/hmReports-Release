Asm4d_Proc proc_INTERN__GETLOCALIZEDOBJECTTYPE2;
Asm4d_Proc proc_INTERN__GETOBJECTTYPE;
extern unsigned char D_proc_INTERN__GETLOCALIZEDOBJECTTYPE[];
void proc_INTERN__GETLOCALIZEDOBJECTTYPE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETLOCALIZEDOBJECTTYPE);
	if (!ctx->doingAbort) try {
		Long lvl__objectID;
		Long lvl__objecttype;
		Long lvl__area;
		new ( outResult) Txt();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__objectID=Parm<Long>(inParams,inNbParam,2).get();
		{
			Long t0;
			t0=lvl__objectID.get();
			Long t1;
			t1=lvl__area.get();
			Long t2;
			c.f.fLine=6;
			proc_INTERN__GETOBJECTTYPE(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__objecttype=t2.get();
		}
		{
			Long t3;
			t3=lvl__objecttype.get();
			Txt t4;
			c.f.fLine=8;
			proc_INTERN__GETLOCALIZEDOBJECTTYPE2(glob,ctx,1,1,(PCV[]){t3.cv()},t4.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Res<Txt>(outResult)=t4.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
