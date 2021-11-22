extern Txt Ktt__resnames;
extern Txt k5oLbMg02EH4;
Asm4d_Proc proc_OBJECT__GETPOINTER;
extern unsigned char D_obj_p_XLIFF_00vl__btn2[];
void obj_p_XLIFF_00vl__btn2( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_XLIFF_00vl__btn2);
	if (!ctx->doingAbort) try {
		Long lvl__size;
		Ptr lvp__tt__resnames;
		{
			Long t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Ktt__resnames.get();
			Ptr t3;
			c.f.fLine=6;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__resnames=t3.get();
		}
		{
			Ref t4;
			c.f.fLine=8;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t4.cv(),lvp__tt__resnames.cv(),(PCV)-1,nullptr})) goto _0;
			Long t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv()},1,274)) goto _0;
			lvl__size=t5.get();
		}
		{
			Long t6;
			t6=lvl__size.get()+1;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k5oLbMg02EH4.cv(),t6.cv()},3,913)) goto _0;
			g->Check(ctx);
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
