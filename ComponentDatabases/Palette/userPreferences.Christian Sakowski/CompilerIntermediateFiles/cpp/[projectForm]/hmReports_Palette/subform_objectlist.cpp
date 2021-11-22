extern Txt Kvl__current__area;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATE;
Asm4d_Proc proc_PAL__UPDATE__PROPERTIES;
extern unsigned char D_obj_p_hmReports__Palette_00subform__objectlist[];
void obj_p_hmReports__Palette_00subform__objectlist( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_hmReports__Palette_00subform__objectlist);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		{
			Long t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (-2001!=t0.get()) goto _3;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=6;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Long t4;
			t4=0;
			Long t5;
			t5=lvl__area.get();
			c.f.fLine=7;
			proc_PAL__UPDATE(glob,ctx,2,2,(PCV[]){t5.cv(),t4.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _2;
_3:
		{
			Long t6;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (-2002!=t6.get()) goto _4;
		}
		{
			Txt t8;
			t8=Kvl__current__area.get();
			Long t9;
			c.f.fLine=11;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t8.cv()},t9.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t9.get();
		}
		{
			Long t10;
			t10=lvl__area.get();
			c.f.fLine=12;
			proc_PAL__UPDATE__PROPERTIES(glob,ctx,1,1,(PCV[]){t10.cv()},nullptr);
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
