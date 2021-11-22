extern Txt Kvl__current__area;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__SET__MULTI__OBJECT__PROPS;
Asm4d_Proc proc_PAL__UPDATE__OBJECT;
extern unsigned char D_proc_PAL__CHANGE__OBJECT[];
void proc_PAL__CHANGE__OBJECT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__CHANGE__OBJECT);
	if (!ctx->doingAbort) try {
		Txt lvt__objectname;
		Long lvl__area;
		Long lvl__selector;
		lvl__selector=Parm<Long>(inParams,inNbParam,1).get();
		lvt__objectname=Parm<Txt>(inParams,inNbParam,2).get();
		{
			Long t0;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			Bool t1;
			t1=20==t0.get();
			Long t2;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,388)) goto _0;
			Bool t3;
			t3=4==t2.get();
			if (!( t1.get()||t3.get())) goto _3;
		}
		{
			Txt t5;
			t5=lvt__objectname.get();
			Long t6;
			t6=lvl__selector.get();
			c.f.fLine=10;
			proc_PAL__SET__MULTI__OBJECT__PROPS(glob,ctx,2,2,(PCV[]){t6.cv(),t5.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _2;
_3:
		{
			Long t7;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (14!=t7.get()) goto _4;
		}
		{
			Txt t9;
			t9=Kvl__current__area.get();
			Long t10;
			c.f.fLine=14;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t9.cv()},t10.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t10.get();
		}
		{
			Txt t11;
			t11=lvt__objectname.get();
			Long t12;
			t12=lvl__area.get();
			c.f.fLine=15;
			proc_PAL__UPDATE__OBJECT(glob,ctx,2,2,(PCV[]){t12.cv(),t11.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _2;
_4:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
