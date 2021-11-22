extern Txt Kvl__current__area;
extern Txt Kvl__next__page;
extern Txt kyWOrItmlicg;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATE__REPORT;
extern unsigned char D_obj_p_PropertyPalette__Report_00vl__next__page[];
void obj_p_PropertyPalette__Report_00vl__next__page( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vl__next__page);
	if (!ctx->doingAbort) try {
		Long lvl__current__page;
		Long lvl__area;
		Long lvl__pages;
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
		{
			Long t6;
			t6=lvl__area.get();
			Long t7;
			c.f.fLine=8;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t7.cv(),t6.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__pages=t7.get();
		}
		if (lvl__current__page.get()>=lvl__pages.get()) goto _3;
		{
			Long t9;
			t9=lvl__current__page.get()+1;
			Long t10;
			t10=lvl__area.get();
			c.f.fLine=12;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,118).cv(),nullptr,t10.cv(),lvl__area.cv(),(CV*)9,t9.cv(),nullptr,(CV*)9},2)) goto _0;
			g->Check(ctx);
		}
		{
			Long t11;
			t11=lvl__area.get();
			c.f.fLine=13;
			proc_PAL__UPDATE__REPORT(glob,ctx,1,1,(PCV[]){t11.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t12;
			t12=lvl__area.get();
			Long t13;
			c.f.fLine=15;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t13.cv(),t12.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Bool t15;
			t15=1<t13.get();
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kyWOrItmlicg.cv(),t15.cv()},3,1123)) goto _0;
		}
		{
			Long t16;
			t16=lvl__area.get();
			Long t17;
			c.f.fLine=16;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t17.cv(),t16.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Long t18;
			t18=lvl__area.get();
			Long t19;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t19.cv(),t18.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			Bool t21;
			t21=t17.get()<t19.get();
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kvl__next__page.cv(),t21.cv()},3,1123)) goto _0;
		}
		c.f.fLine=18;
		if (g->Call(ctx,(PCV[]){nullptr,Long(-2001).cv()},1,1086)) goto _0;
		g->Check(ctx);
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
