extern Txt K;
extern Txt K__multi;
extern Txt Kvl__obj__fett;
extern Txt Kvl__obj__kursiv;
extern Txt Kvl__obj__moveable;
extern Txt Kvl__obj__print;
extern Txt k0duLkYZa39c;
extern Txt k7MPyktfpIeU;
extern Txt kFhai9F_sNOY;
extern Txt kLZOrm$ZkhuQ;
extern Txt kTSkcKqJ_oTg;
extern Txt kU2zkgE906Dw;
extern Txt kdEIiV5O$KzQ;
extern Txt khc1yIzAqVRY;
extern Txt ki4K74cJJIUI;
Asm4d_Proc proc_OBJECT__SETLONGINT;
Asm4d_Proc proc_PAL__CHANGE__OBJECT;
extern unsigned char D_proc_PAL__CLICK__MULTI[];
void proc_PAL__CLICK__MULTI( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__CLICK__MULTI);
	if (!ctx->doingAbort) try {
		Txt lvt__objectname;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t2.cv(),Long(0).cv()},1,1087)) goto _0;
			g->Check(ctx);
			lvt__objectname=t2.get();
		}
		{
			Txt t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv(),lvt__objectname.cv(),K__multi.cv(),K.cv()},3,233)) goto _0;
			lvt__objectname=t3.get();
		}
		{
			Txt t4;
			g->AddString(lvt__objectname.get(),K__multi.get(),t4.get());
			Bool t5;
			t5=false;
			Bool t6;
			t6=t5.get();
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),t4.cv(),t6.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t7;
			t7=true;
			Bool t8;
			t8=t7.get();
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__objectname.cv(),t8.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__objectname.cv()},2,206)) goto _0;
		g->Check(ctx);
		{
			Bool t9;
			t9=g->CompareString(ctx,lvt__objectname.get(),k7MPyktfpIeU.get())==0;
			if (!(t9.get())) goto _4;
		}
		{
			Long t10;
			t10=0;
			Txt t11;
			t11=lvt__objectname.get();
			c.f.fLine=14;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t11.cv(),t10.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t12;
			t12=lvt__objectname.get();
			Long t13;
			t13=5;
			c.f.fLine=15;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t13.cv(),t12.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_4:
		{
			Bool t14;
			t14=g->CompareString(ctx,lvt__objectname.get(),kdEIiV5O$KzQ.get())==0;
			if (!(t14.get())) goto _5;
		}
		{
			Long t15;
			t15=0;
			Txt t16;
			t16=lvt__objectname.get();
			c.f.fLine=18;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t16.cv(),t15.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t17;
			t17=lvt__objectname.get();
			Long t18;
			t18=6;
			c.f.fLine=19;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t18.cv(),t17.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_5:
		{
			Bool t19;
			t19=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__fett.get())==0;
			if (!(t19.get())) goto _6;
		}
		{
			Long t20;
			t20=0;
			Txt t21;
			t21=lvt__objectname.get();
			c.f.fLine=22;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t21.cv(),t20.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t22;
			t22=lvt__objectname.get();
			Long t23;
			t23=16;
			c.f.fLine=23;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t23.cv(),t22.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_6:
		{
			Bool t24;
			t24=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__kursiv.get())==0;
			if (!(t24.get())) goto _7;
		}
		{
			Long t25;
			t25=0;
			Txt t26;
			t26=lvt__objectname.get();
			c.f.fLine=26;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t26.cv(),t25.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t27;
			t27=lvt__objectname.get();
			Long t28;
			t28=16;
			c.f.fLine=27;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t28.cv(),t27.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_7:
		{
			Bool t29;
			t29=g->CompareString(ctx,lvt__objectname.get(),kFhai9F_sNOY.get())==0;
			if (!(t29.get())) goto _8;
		}
		{
			Long t30;
			t30=0;
			Txt t31;
			t31=lvt__objectname.get();
			c.f.fLine=30;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t31.cv(),t30.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t32;
			t32=lvt__objectname.get();
			Long t33;
			t33=16;
			c.f.fLine=31;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t33.cv(),t32.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_8:
		{
			Bool t34;
			t34=g->CompareString(ctx,lvt__objectname.get(),kU2zkgE906Dw.get())==0;
			if (!(t34.get())) goto _9;
		}
		{
			Long t35;
			t35=0;
			Txt t36;
			t36=lvt__objectname.get();
			c.f.fLine=34;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t36.cv(),t35.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t37;
			t37=lvt__objectname.get();
			Long t38;
			t38=16;
			c.f.fLine=35;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t38.cv(),t37.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_9:
		{
			Bool t39;
			t39=g->CompareString(ctx,lvt__objectname.get(),kLZOrm$ZkhuQ.get())==0;
			if (!(t39.get())) goto _10;
		}
		{
			Long t40;
			t40=0;
			Txt t41;
			t41=lvt__objectname.get();
			c.f.fLine=38;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t41.cv(),t40.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t42;
			t42=lvt__objectname.get();
			Long t43;
			t43=18;
			c.f.fLine=39;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t43.cv(),t42.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_10:
		{
			Bool t44;
			t44=g->CompareString(ctx,lvt__objectname.get(),ki4K74cJJIUI.get())==0;
			if (!(t44.get())) goto _11;
		}
		{
			Long t45;
			t45=0;
			Txt t46;
			t46=lvt__objectname.get();
			c.f.fLine=42;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t46.cv(),t45.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t47;
			t47=lvt__objectname.get();
			Long t48;
			t48=22;
			c.f.fLine=43;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t48.cv(),t47.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_11:
		{
			Bool t49;
			t49=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__print.get())==0;
			if (!(t49.get())) goto _12;
		}
		{
			Long t50;
			t50=0;
			Txt t51;
			t51=lvt__objectname.get();
			c.f.fLine=46;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t51.cv(),t50.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t52;
			t52=lvt__objectname.get();
			Long t53;
			t53=75;
			c.f.fLine=47;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t53.cv(),t52.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_12:
		{
			Bool t54;
			t54=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__moveable.get())==0;
			if (!(t54.get())) goto _13;
		}
		{
			Long t55;
			t55=0;
			Txt t56;
			t56=lvt__objectname.get();
			c.f.fLine=50;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t56.cv(),t55.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t57;
			t57=lvt__objectname.get();
			Long t58;
			t58=76;
			c.f.fLine=51;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t58.cv(),t57.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_13:
		{
			Bool t59;
			t59=g->CompareString(ctx,lvt__objectname.get(),k0duLkYZa39c.get())==0;
			if (!(t59.get())) goto _14;
		}
		{
			Long t60;
			t60=0;
			Txt t61;
			t61=lvt__objectname.get();
			c.f.fLine=54;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t61.cv(),t60.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t62;
			t62=lvt__objectname.get();
			Long t63;
			t63=87;
			c.f.fLine=55;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t63.cv(),t62.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_14:
		{
			Bool t64;
			t64=g->CompareString(ctx,lvt__objectname.get(),khc1yIzAqVRY.get())==0;
			if (!(t64.get())) goto _15;
		}
		{
			Long t65;
			t65=0;
			Txt t66;
			t66=lvt__objectname.get();
			c.f.fLine=58;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t66.cv(),t65.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t67;
			t67=lvt__objectname.get();
			Long t68;
			t68=77;
			c.f.fLine=59;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t68.cv(),t67.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_15:
		{
			Bool t69;
			t69=g->CompareString(ctx,lvt__objectname.get(),kTSkcKqJ_oTg.get())==0;
			if (!(t69.get())) goto _16;
		}
		{
			Long t70;
			t70=0;
			Txt t71;
			t71=lvt__objectname.get();
			c.f.fLine=62;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t71.cv(),t70.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t72;
			t72=lvt__objectname.get();
			Long t73;
			t73=39;
			c.f.fLine=63;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t73.cv(),t72.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _3;
_16:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
