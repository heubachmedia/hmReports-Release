extern Txt Kvl__current__area;
extern Txt Kvl__next__page;
extern Txt kyWOrItmlicg;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATE__REPORT;
extern unsigned char D_obj_p_PropertyPalette__Report_00vl__seitenpopup[];
void obj_p_PropertyPalette__Report_00vl__seitenpopup( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vl__seitenpopup);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Long li;
		Long lvl__ref;
		Txt lvt__menu;
		Long lvl__current__page;
		Long lvl__area;
		Long lvl__pages;
		{
			Long t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
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
			t4=lvl__area.get();
			Long t5;
			c.f.fLine=8;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t5.cv(),t4.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__pages=t5.get();
		}
		{
			Long t6;
			t6=lvl__area.get();
			Long t7;
			c.f.fLine=9;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t7.cv(),t6.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__current__page=t7.get();
		}
		if (1>=lvl__pages.get()) goto _3;
		{
			Txt t9;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,408)) goto _0;
			g->Check(ctx);
			lvt__menu=t9.get();
		}
		li=1;
		v0=lvl__pages.get();
		goto _4;
_5:
		{
			Txt t10;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t10.cv(),li.cv()},1,10)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__menu.cv(),t10.cv()},2,411)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t11;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t11.cv(),li.cv()},1,10)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__menu.cv(),Long(-1).cv(),t11.cv()},3,1004)) goto _0;
			g->Check(ctx);
		}
		if (li.get()!=lvl__current__page.get()) goto _6;
		{
			Txt t13;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t13.cv(),Long(18).cv()},1,90)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__menu.cv(),Long(-1).cv(),t13.cv()},3,208)) goto _0;
			g->Check(ctx);
		}
_6:
		li=li.get()+1;
_4:
		if (li.get()<=v0.get()) goto _5;
		{
			Txt t16;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t16.cv(),lvl__current__page.cv()},1,10)) goto _0;
			Txt t17;
			if (g->Call(ctx,(PCV[]){t17.cv(),lvt__menu.cv(),t16.cv()},2,1006)) goto _0;
			g->Check(ctx);
			Num t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t17.cv()},1,11)) goto _0;
			lvl__ref=(sLONG)lrint(t18.get());
		}
		c.f.fLine=29;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__menu.cv()},1,978)) goto _0;
		g->Check(ctx);
		{
			Bool t20;
			t20=0<lvl__ref.get();
			Bool t21;
			t21=lvl__ref.get()!=lvl__current__page.get();
			if (!( t20.get()&&t21.get())) goto _7;
		}
		{
			Long t23;
			t23=lvl__ref.get();
			Long t24;
			t24=lvl__area.get();
			c.f.fLine=33;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,118).cv(),nullptr,t24.cv(),lvl__area.cv(),(CV*)9,t23.cv(),lvl__ref.cv(),(CV*)9},2)) goto _0;
			g->Check(ctx);
		}
		{
			Long t25;
			t25=lvl__area.get();
			c.f.fLine=34;
			proc_PAL__UPDATE__REPORT(glob,ctx,1,1,(PCV[]){t25.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t26;
			t26=lvl__area.get();
			Long t27;
			c.f.fLine=36;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t27.cv(),t26.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Bool t29;
			t29=1<t27.get();
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kyWOrItmlicg.cv(),t29.cv()},3,1123)) goto _0;
		}
		{
			Long t30;
			t30=lvl__area.get();
			Long t31;
			c.f.fLine=37;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t31.cv(),t30.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Long t32;
			t32=lvl__area.get();
			Long t33;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t33.cv(),t32.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			Bool t35;
			t35=t31.get()<t33.get();
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kvl__next__page.cv(),t35.cv()},3,1123)) goto _0;
		}
		c.f.fLine=39;
		if (g->Call(ctx,(PCV[]){nullptr,Long(-2001).cv()},1,1086)) goto _0;
		g->Check(ctx);
_7:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
