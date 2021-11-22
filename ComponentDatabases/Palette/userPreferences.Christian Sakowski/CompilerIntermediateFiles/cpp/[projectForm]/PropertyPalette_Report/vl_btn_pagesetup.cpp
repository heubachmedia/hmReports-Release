extern Txt Kvl__current__area;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATE__PAGE__SETSIZE;
extern unsigned char D_obj_p_PropertyPalette__Report_00vl__btn__pagesetup[];
void obj_p_PropertyPalette__Report_00vl__btn__pagesetup( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vl__btn__pagesetup);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Long lvl__result;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=5;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Long t4;
			t4=1;
			Long t5;
			t5=lvl__area.get();
			Long t6;
			c.f.fLine=7;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,44).cv(),t6.cv(),t5.cv(),lvl__area.cv(),(CV*)9,t4.cv(),nullptr,(CV*)9},2)) goto _0;
			g->Check(ctx);
			lvl__result=t6.get();
		}
		{
			Long t7;
			t7=lvl__area.get();
			c.f.fLine=9;
			proc_PAL__UPDATE__PAGE__SETSIZE(glob,ctx,1,1,(PCV[]){t7.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
