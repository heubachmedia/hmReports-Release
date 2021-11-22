extern Txt Kvl__current__area;
extern Txt Kvl__next__page;
extern Txt kyWOrItmlicg;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATE__REPORT;
extern unsigned char D_obj_p_PropertyPalette__Report_00vl__previous__page[];
void obj_p_PropertyPalette__Report_00vl__previous__page( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vl__previous__page);
	if (!ctx->doingAbort) try {
		Long lvl__current__page;
		Long lvl__area;
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
			t4=lvl__area.get();
			Long t5;
			c.f.fLine=7;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t5.cv(),t4.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__current__page=t5.get();
		}
		if (1>=lvl__current__page.get()) goto _3;
		{
			Long t7;
			t7=lvl__current__page.get()-1;
			Long t8;
			t8=lvl__area.get();
			c.f.fLine=11;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,118).cv(),nullptr,t8.cv(),lvl__area.cv(),(CV*)9,t7.cv(),nullptr,(CV*)9},2)) goto _0;
			g->Check(ctx);
		}
		{
			Long t9;
			t9=lvl__area.get();
			c.f.fLine=12;
			proc_PAL__UPDATE__REPORT(glob,ctx,1,1,(PCV[]){t9.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t10;
			t10=lvl__area.get();
			Long t11;
			c.f.fLine=14;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t11.cv(),t10.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Bool t13;
			t13=1<t11.get();
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kyWOrItmlicg.cv(),t13.cv()},3,1123)) goto _0;
		}
		{
			Long t14;
			t14=lvl__area.get();
			Long t15;
			c.f.fLine=15;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t15.cv(),t14.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Long t16;
			t16=lvl__area.get();
			Long t17;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t17.cv(),t16.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			Bool t19;
			t19=t15.get()<t17.get();
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kvl__next__page.cv(),t19.cv()},3,1123)) goto _0;
		}
		c.f.fLine=17;
		if (g->Call(ctx,(PCV[]){nullptr,Long(-2001).cv()},1,1086)) goto _0;
		g->Check(ctx);
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
