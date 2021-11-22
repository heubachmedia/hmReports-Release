extern Txt Kvz__margin__left;
extern Txt Kvz__margin__right;
extern Txt Kvz__margin__top;
extern Txt Kvz__rep__breite;
extern Txt Kvz__rep__hoehe;
extern Txt kZGuEL2VUZYQ;
extern Txt khHGUW_oFjC8;
extern Txt kwcTHMvKMIWA;
extern Txt kzdRK9x3e1WI;
Asm4d_Proc proc_INTERN__GETUNITNAME;
Asm4d_Proc proc_OBJECT__SETREALANDROUND;
Asm4d_Proc proc_OBJECT__SETTEXT;
Asm4d_Proc proc_PARSE__GETPAGEPROPERTYLONG;
extern unsigned char D_proc_PAL__UPDATE__PAGE__SETSIZE[];
void proc_PAL__UPDATE__PAGE__SETSIZE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__PAGE__SETSIZE);
	if (!ctx->doingAbort) try {
		Txt lvt__unit;
		Long lvl__1;
		Long lvl__2;
		Long lvl__area;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=8;
			Long t1;
			t1=lvl__area.get();
			Long t2;
			c.f.fLine=8;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__1=t2.get();
		}
		{
			Num t3;
			t3=lvl__1.get();
			Long t4;
			t4=lvl__area.get();
			Num t5;
			c.f.fLine=9;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t5.cv(),t4.cv(),lvl__area.cv(),(CV*)9,t3.cv(),lvl__1.cv(),(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvl__2=(sLONG)lrint(t5.get());
		}
		{
			Long t7;
			t7=8;
			Long t8;
			t8=lvl__area.get();
			Long t9;
			c.f.fLine=11;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t8.cv(),t7.cv()},t9.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Num t10;
			t10=t9.get();
			Long t11;
			t11=lvl__area.get();
			Num t12;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t12.cv(),t11.cv(),lvl__area.cv(),(CV*)9,t10.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Long t13;
			t13=2;
			Txt t14;
			t14=Kvz__rep__breite.get();
			proc_OBJECT__SETREALANDROUND(glob,ctx,3,3,(PCV[]){t14.cv(),t12.cv(),t13.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t15;
			t15=9;
			Long t16;
			t16=lvl__area.get();
			Long t17;
			c.f.fLine=12;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t16.cv(),t15.cv()},t17.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Num t18;
			t18=t17.get();
			Long t19;
			t19=lvl__area.get();
			Num t20;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t20.cv(),t19.cv(),lvl__area.cv(),(CV*)9,t18.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Long t21;
			t21=2;
			Txt t22;
			t22=Kvz__rep__hoehe.get();
			proc_OBJECT__SETREALANDROUND(glob,ctx,3,3,(PCV[]){t22.cv(),t20.cv(),t21.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t23;
			t23=10;
			Long t24;
			t24=lvl__area.get();
			Long t25;
			c.f.fLine=14;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t24.cv(),t23.cv()},t25.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Num t26;
			t26=t25.get();
			Long t27;
			t27=lvl__area.get();
			Num t28;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t28.cv(),t27.cv(),lvl__area.cv(),(CV*)9,t26.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Long t29;
			t29=2;
			Txt t30;
			t30=Kvz__margin__left.get();
			proc_OBJECT__SETREALANDROUND(glob,ctx,3,3,(PCV[]){t30.cv(),t28.cv(),t29.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t31;
			t31=11;
			Long t32;
			t32=lvl__area.get();
			Long t33;
			c.f.fLine=15;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t32.cv(),t31.cv()},t33.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Num t34;
			t34=t33.get();
			Long t35;
			t35=lvl__area.get();
			Num t36;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t36.cv(),t35.cv(),lvl__area.cv(),(CV*)9,t34.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Long t37;
			t37=2;
			Txt t38;
			t38=Kvz__margin__top.get();
			proc_OBJECT__SETREALANDROUND(glob,ctx,3,3,(PCV[]){t38.cv(),t36.cv(),t37.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t39;
			t39=12;
			Long t40;
			t40=lvl__area.get();
			Long t41;
			c.f.fLine=16;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t40.cv(),t39.cv()},t41.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Num t42;
			t42=t41.get();
			Long t43;
			t43=lvl__area.get();
			Num t44;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t44.cv(),t43.cv(),lvl__area.cv(),(CV*)9,t42.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Long t45;
			t45=2;
			Txt t46;
			t46=Kvz__margin__right.get();
			proc_OBJECT__SETREALANDROUND(glob,ctx,3,3,(PCV[]){t46.cv(),t44.cv(),t45.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t47;
			t47=13;
			Long t48;
			t48=lvl__area.get();
			Long t49;
			c.f.fLine=17;
			proc_PARSE__GETPAGEPROPERTYLONG(glob,ctx,2,2,(PCV[]){t48.cv(),t47.cv()},t49.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Num t50;
			t50=t49.get();
			Long t51;
			t51=lvl__area.get();
			Num t52;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t52.cv(),t51.cv(),lvl__area.cv(),(CV*)9,t50.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Long t53;
			t53=2;
			Txt t54;
			t54=khHGUW_oFjC8.get();
			proc_OBJECT__SETREALANDROUND(glob,ctx,3,3,(PCV[]){t54.cv(),t52.cv(),t53.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t55;
			t55=lvl__area.get();
			Txt t56;
			c.f.fLine=19;
			proc_INTERN__GETUNITNAME(glob,ctx,1,1,(PCV[]){t55.cv()},t56.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__unit=t56.get();
		}
		{
			Txt t57;
			t57=lvt__unit.get();
			Txt t58;
			t58=kZGuEL2VUZYQ.get();
			c.f.fLine=20;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t58.cv(),t57.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t59;
			t59=lvt__unit.get();
			Txt t60;
			t60=kzdRK9x3e1WI.get();
			c.f.fLine=21;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t60.cv(),t59.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t61;
			t61=lvt__unit.get();
			Txt t62;
			t62=kwcTHMvKMIWA.get();
			c.f.fLine=22;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t62.cv(),t61.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
