extern Txt K_2F;
extern Txt Kvl__current__area;
extern Txt Kvl__next__page;
extern Txt Kvl__seitenrahmen;
extern Txt Kvt__rep__page;
extern Txt Kvt__rep__uuid;
extern Txt kND539ZNI90I;
extern Txt kSeYFyM6O2tg;
extern Txt kVUl0Q6L3tEg;
extern Txt kYOs7kLNy3fo;
extern Txt kaJWoayTPTrY;
extern Txt kagflPkkFMnM;
extern Txt kiNzkhVUuRyE;
extern Txt kyWOrItmlicg;
Asm4d_Proc proc_OBJECT__SETLONGINT;
Asm4d_Proc proc_OBJECT__SETTEXT;
Asm4d_Proc proc_PAL__UPDATE__PAGE__SETSIZE;
Asm4d_Proc proc_PARSE__GETPAGEPROPERTYLONG;
Asm4d_Proc proc_PARSE__GETREPORTPROPERTYLONG;
Asm4d_Proc proc_PARSE__GETREPORTPROPERTYTEXT;
extern unsigned char D_proc_PAL__UPDATE__REPORT[];
void proc_PAL__UPDATE__REPORT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__REPORT);
	if (!ctx->doingAbort) try {
		Long lvl__current__page;
		Long lvl__area;
		Long lvl__pages;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=lvl__area.get();
			Txt t1;
			t1=Kvl__current__area.get();
			c.f.fLine=5;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t2;
			t2=2;
			Long t3;
			t3=lvl__area.get();
			Txt t4;
			c.f.fLine=7;
			proc_PARSE__GETREPORTPROPERTYTEXT(glob,ctx,2,2,(PCV[]){t3.cv(),t2.cv()},t4.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t5;
			t5=kaJWoayTPTrY.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t5.cv(),t4.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t6;
			t6=1;
			Long t7;
			t7=lvl__area.get();
			Txt t8;
			c.f.fLine=8;
			proc_PARSE__GETREPORTPROPERTYTEXT(glob,ctx,2,2,(PCV[]){t7.cv(),t6.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t9;
			t9=Kvt__rep__uuid.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t9.cv(),t8.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t10;
			t10=lvl__area.get();
			c.f.fLine=10;
			proc_PAL__UPDATE__PAGE__SETSIZE(glob,ctx,1,1,(PCV[]){t10.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t11;
			t11=18;
			Long t12;
			t12=lvl__area.get();
			Long t13;
			c.f.fLine=12;
			proc_PARSE__GETREPORTPROPERTYLONG(glob,ctx,2,2,(PCV[]){t12.cv(),t11.cv()},t13.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t14;
			t14=kYOs7kLNy3fo.get();
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t14.cv(),t13.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t15;
			t15=6;
			Long t16;
			t16=lvl__area.get();
			Long t17;
			c.f.fLine=16;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t16.cv(),t15.cv()},t17.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t18;
			t18=kiNzkhVUuRyE.get();
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t18.cv(),t17.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t19;
			t19=2;
			Long t20;
			t20=lvl__area.get();
			Long t21;
			c.f.fLine=17;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t20.cv(),t19.cv()},t21.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t22;
			t22=Kvl__seitenrahmen.get();
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t22.cv(),t21.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t23;
			t23=3;
			Long t24;
			t24=lvl__area.get();
			Long t25;
			c.f.fLine=18;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t24.cv(),t23.cv()},t25.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t26;
			t26=kagflPkkFMnM.get();
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t26.cv(),t25.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t27;
			t27=4;
			Long t28;
			t28=lvl__area.get();
			Long t29;
			c.f.fLine=19;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t28.cv(),t27.cv()},t29.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t30;
			t30=kND539ZNI90I.get();
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t30.cv(),t29.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t31;
			t31=5;
			Long t32;
			t32=lvl__area.get();
			Long t33;
			c.f.fLine=20;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t32.cv(),t31.cv()},t33.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t34;
			t34=kVUl0Q6L3tEg.get();
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t34.cv(),t33.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t35;
			t35=7;
			Long t36;
			t36=lvl__area.get();
			Long t37;
			c.f.fLine=21;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t36.cv(),t35.cv()},t37.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t38;
			t38=kSeYFyM6O2tg.get();
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t38.cv(),t37.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t39;
			t39=lvl__area.get();
			Long t40;
			c.f.fLine=23;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t40.cv(),t39.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__pages=t40.get();
		}
		{
			Long t41;
			t41=lvl__area.get();
			Long t42;
			c.f.fLine=24;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t42.cv(),t41.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__current__page=t42.get();
		}
		{
			Bool t44;
			t44=1<lvl__current__page.get();
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kyWOrItmlicg.cv(),t44.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t46;
			t46=lvl__current__page.get()<lvl__pages.get();
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kvl__next__page.cv(),t46.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t47;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t47.cv(),lvl__current__page.cv()},1,10)) goto _0;
			Txt t48;
			g->AddString(t47.get(),K_2F.get(),t48.get());
			Txt t49;
			if (g->Call(ctx,(PCV[]){t49.cv(),lvl__pages.cv()},1,10)) goto _0;
			Txt t50;
			g->AddString(t48.get(),t49.get(),t50.get());
			Txt t51;
			t51=Kvt__rep__page.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t51.cv(),t50.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
