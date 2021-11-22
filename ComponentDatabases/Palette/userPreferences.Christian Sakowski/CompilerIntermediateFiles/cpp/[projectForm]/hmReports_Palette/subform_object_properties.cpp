extern Txt Kvl__current__area;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__GETCURRENTTAB;
Asm4d_Proc proc_PAL__UPDATETABBAR;
extern unsigned char D_obj_p_hmReports__Palette_00subform__object__properties[];
void obj_p_hmReports__Palette_00subform__object__properties( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_hmReports__Palette_00subform__object__properties);
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
			Long t2;
			c.f.fLine=6;
			proc_PAL__GETCURRENTTAB(glob,ctx,0,0,nullptr,t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (2!=t2.get()) goto _4;
		}
		{
			Txt t4;
			t4=Kvl__current__area.get();
			Long t5;
			c.f.fLine=8;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t5.get();
		}
		{
			Long t6;
			t6=lvl__area.get();
			c.f.fLine=10;
			proc_PAL__UPDATETABBAR(glob,ctx,1,1,(PCV[]){t6.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_4:
		goto _2;
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
