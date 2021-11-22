extern int32_t vOK;
extern Txt K;
extern Txt Kfillcolor__popup;
extern Txt Ktextcolor__popup;
extern Txt Ktl__barcode;
extern Txt Ktt__barcode;
extern Txt Kvl__current__area;
extern Txt Kvl__obj__fett;
extern Txt Kvl__obj__kursiv;
extern Txt Kvz__bottom;
extern Txt Kvz__height;
extern Txt Kvz__left;
extern Txt Kvz__right;
extern Txt Kvz__top;
extern Txt Kvz__width;
extern Txt k8Kva5G2MigM;
extern Txt kFhai9F_sNOY;
extern Txt kInRSiF$6ZYQ;
extern Txt kKHsc7SNAEyc;
extern Txt kMcPPBzEYtZk;
extern Txt kOE66JInM1Vw;
extern Txt kU2zkgE906Dw;
extern Txt keJsXRPvW4Oo;
extern Txt kia$iPDsWsfo;
extern Txt kxJeR8p29qug;
Asm4d_Proc proc_INTERN__COLOR16BITTO8BIT;
Asm4d_Proc proc_INTERN__COLOR8BITTO16BIT;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETOBJECTTYPE;
Asm4d_Proc proc_OBJECT__GETCURRENTARRAYINDEX;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_OBJECT__GETREAL;
Asm4d_Proc proc_OBJECT__GETTEXT;
Asm4d_Proc proc_PAL__UPDATE__OBJECT;
extern unsigned char D_proc_PAL__SET__MULTI__OBJECT__PROPS[];
void proc_PAL__SET__MULTI__OBJECT__PROPS( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__SET__MULTI__OBJECT__PROPS);
	if (!ctx->doingAbort) try {
		Txt lvt__fontname;
		Long v0;
		Num lvz__value;
		Txt lvt__uuid;
		Ptr lvp__object;
		Txt lvt__objectname;
		Long lvl__font__bold;
		Long lvl__font__italic;
		Value_array_longint ltl__selected__objects;
		Long v1;
		Num lvz__top;
		Num lvz__right;
		Long lvl__fontstyle;
		Long li;
		Long lvl__red;
		Long lvl__alignment;
		Num lvz__alpha;
		Long lvl__8bitcolor;
		Bool lvf__ok;
		Long lvl__font__strikethrough;
		Long lvl__area;
		Num lvz__fontsize;
		Long lvl__green;
		Num lvz__width;
		Ptr lvp__object2;
		Ptr lvp__object3;
		Long lvl__blue;
		Long lvl__page;
		Long lvl__color;
		Num lvz__bottom;
		Long lvl__barcode;
		Long lvl__selector;
		Long lvl__font__underline;
		Long lvl__pos;
		Num lvz__height;
		Num lvz__left;
		Long lvl__type;
		lvl__selector=Parm<Long>(inParams,inNbParam,1).get();
		lvt__objectname=Parm<Txt>(inParams,inNbParam,2).get();
		{
			Txt t0;
			t0=Kvl__current__area.get();
			Long t1;
			c.f.fLine=10;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t0.cv()},t1.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t1.get();
		}
		{
			Ref t2;
			t2.setLocalRef(ctx,ltl__selected__objects.cv());
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){nullptr,t2.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Long t3;
			t3=1;
			Long t4;
			t4=3;
			Long t5;
			t5=lvl__area.get();
			c.f.fLine=13;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,31).cv(),nullptr,t5.cv(),lvl__area.cv(),(CV*)9,t4.cv(),nullptr,(CV*)9,t3.cv(),nullptr,(CV*)9,ltl__selected__objects.cv(),nullptr,(CV*)65543},4)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t6;
			t6=true;
			lvf__ok=t6.get();
		}
		li=1;
		{
			Ref t7;
			t7.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t8;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv()},1,274)) goto _0;
			v0=t8.get();
		}
		goto _2;
_3:
		{
			Long t9;
			t9=ltl__selected__objects.arrayElem(li.get()).get();
			Long t10;
			t10=lvl__area.get();
			Long t11;
			c.f.fLine=19;
			proc_INTERN__GETOBJECTTYPE(glob,ctx,2,2,(PCV[]){t10.cv(),t9.cv()},t11.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__type=t11.get();
		}
		if (-1!=lvl__selector.get()) goto _5;
		lvz__left=0;
		lvz__top=0;
		lvz__right=0;
		lvz__bottom=0;
		{
			Num t13;
			t13=lvz__bottom.get();
			Num t14;
			t14=lvz__right.get();
			Num t15;
			t15=lvz__top.get();
			Num t16;
			t16=lvz__left.get();
			Long t17;
			t17=ltl__selected__objects.arrayElem(li.get()).get();
			Long t18;
			t18=lvl__area.get();
			c.f.fLine=28;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,39).cv(),nullptr,t18.cv(),lvl__area.cv(),(CV*)9,t17.cv(),nullptr,(CV*)9,t16.cv(),lvz__left.cv(),(CV*)65537,t15.cv(),lvz__top.cv(),(CV*)65537,t14.cv(),lvz__right.cv(),(CV*)65537,t13.cv(),lvz__bottom.cv(),(CV*)65537},6)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t19;
			t19=g->CompareString(ctx,lvt__objectname.get(),Kvz__left.get())==0;
			if (!(t19.get())) goto _7;
		}
		{
			Txt t20;
			t20=lvt__objectname.get();
			Num t21;
			c.f.fLine=32;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t20.cv()},t21.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t22;
			t22=lvl__area.get();
			Num t23;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,69).cv(),t23.cv(),t22.cv(),lvl__area.cv(),(CV*)9,t21.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvz__left=t23.get();
		}
		goto _6;
_7:
		{
			Bool t24;
			t24=g->CompareString(ctx,lvt__objectname.get(),Kvz__top.get())==0;
			if (!(t24.get())) goto _8;
		}
		{
			Txt t25;
			t25=lvt__objectname.get();
			Num t26;
			c.f.fLine=35;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t25.cv()},t26.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t27;
			t27=lvl__area.get();
			Num t28;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,69).cv(),t28.cv(),t27.cv(),lvl__area.cv(),(CV*)9,t26.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvz__top=t28.get();
		}
		goto _6;
_8:
		{
			Bool t29;
			t29=g->CompareString(ctx,lvt__objectname.get(),Kvz__right.get())==0;
			if (!(t29.get())) goto _9;
		}
		{
			Txt t30;
			t30=lvt__objectname.get();
			Num t31;
			c.f.fLine=38;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t30.cv()},t31.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t32;
			t32=lvl__area.get();
			Num t33;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,69).cv(),t33.cv(),t32.cv(),lvl__area.cv(),(CV*)9,t31.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvz__right=t33.get();
		}
		goto _6;
_9:
		{
			Bool t34;
			t34=g->CompareString(ctx,lvt__objectname.get(),Kvz__bottom.get())==0;
			if (!(t34.get())) goto _10;
		}
		{
			Txt t35;
			t35=lvt__objectname.get();
			Num t36;
			c.f.fLine=41;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t35.cv()},t36.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t37;
			t37=lvl__area.get();
			Num t38;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,69).cv(),t38.cv(),t37.cv(),lvl__area.cv(),(CV*)9,t36.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvz__bottom=t38.get();
		}
		goto _6;
_10:
		{
			Bool t39;
			t39=g->CompareString(ctx,lvt__objectname.get(),Kvz__width.get())==0;
			if (!(t39.get())) goto _11;
		}
		{
			Txt t40;
			t40=lvt__objectname.get();
			Num t41;
			c.f.fLine=44;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t40.cv()},t41.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t42;
			t42=lvl__area.get();
			Num t43;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,69).cv(),t43.cv(),t42.cv(),lvl__area.cv(),(CV*)9,t41.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvz__width=t43.get();
		}
		lvz__right=lvz__left.get()+lvz__width.get();
		goto _6;
_11:
		{
			Bool t45;
			t45=g->CompareString(ctx,lvt__objectname.get(),Kvz__height.get())==0;
			if (!(t45.get())) goto _12;
		}
		{
			Txt t46;
			t46=lvt__objectname.get();
			Num t47;
			c.f.fLine=48;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t46.cv()},t47.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t48;
			t48=lvl__area.get();
			Num t49;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,69).cv(),t49.cv(),t48.cv(),lvl__area.cv(),(CV*)9,t47.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvz__height=t49.get();
		}
		lvz__bottom=lvz__top.get()+lvz__height.get();
		goto _6;
_12:
_6:
		{
			Num t51;
			t51=lvz__bottom.get();
			Num t52;
			t52=lvz__right.get();
			Num t53;
			t53=lvz__top.get();
			Num t54;
			t54=lvz__left.get();
			Long t55;
			t55=ltl__selected__objects.arrayElem(li.get()).get();
			Long t56;
			t56=lvl__area.get();
			c.f.fLine=53;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,40).cv(),nullptr,t56.cv(),lvl__area.cv(),(CV*)9,t55.cv(),nullptr,(CV*)9,t54.cv(),lvz__left.cv(),(CV*)65537,t53.cv(),lvz__top.cv(),(CV*)65537,t52.cv(),lvz__right.cv(),(CV*)65537,t51.cv(),lvz__bottom.cv(),(CV*)65537},6)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_5:
		if (4!=lvl__selector.get()) goto _13;
		{
			Long t58;
			t58=0;
			Txt t59;
			t59=lvt__objectname.get();
			Txt t60;
			c.f.fLine=57;
			proc_OBJECT__GETTEXT(glob,ctx,1,2,(PCV[]){t59.cv(),t58.cv()},t60.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Num t61;
			t61=0;
			Long t62;
			t62=lvl__selector.get();
			Long t63;
			t63=ltl__selected__objects.arrayElem(li.get()).get();
			Long t64;
			t64=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t64.cv(),lvl__area.cv(),(CV*)9,t63.cv(),nullptr,(CV*)9,t62.cv(),lvl__selector.cv(),(CV*)9,t61.cv(),nullptr,(CV*)65537,t60.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_13:
		if (5!=lvl__selector.get()) goto _14;
		{
			Txt t66;
			t66=lvt__objectname.get();
			Long t67;
			c.f.fLine=61;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t66.cv()},t67.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t68;
			t68=K.get();
			Num t69;
			t69=t67.get();
			Long t70;
			t70=lvl__selector.get();
			Long t71;
			t71=ltl__selected__objects.arrayElem(li.get()).get();
			Long t72;
			t72=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t72.cv(),lvl__area.cv(),(CV*)9,t71.cv(),nullptr,(CV*)9,t70.cv(),lvl__selector.cv(),(CV*)9,t69.cv(),nullptr,(CV*)65537,t68.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_14:
		if (6!=lvl__selector.get()) goto _15;
		{
			Txt t74;
			t74=lvt__objectname.get();
			Long t75;
			c.f.fLine=65;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t74.cv()},t75.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t76;
			t76=K.get();
			Num t77;
			t77=t75.get();
			Long t78;
			t78=lvl__selector.get();
			Long t79;
			t79=ltl__selected__objects.arrayElem(li.get()).get();
			Long t80;
			t80=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t80.cv(),lvl__area.cv(),(CV*)9,t79.cv(),nullptr,(CV*)9,t78.cv(),lvl__selector.cv(),(CV*)9,t77.cv(),nullptr,(CV*)65537,t76.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_15:
		{
			Long t81;
			t81=2+1000;
			Bool t82;
			t82=lvl__selector.get()==t81.get();
			Bool t83;
			t83=g->CompareString(ctx,lvt__objectname.get(),keJsXRPvW4Oo.get())==0;
			Bool t84;
			t84=t82.get()&&t83.get();
			Long t85;
			t85=1+1000;
			Bool t86;
			t86=lvl__selector.get()==t85.get();
			Bool t87;
			t87=g->CompareString(ctx,lvt__objectname.get(),Kfillcolor__popup.get())==0;
			Bool t88;
			t88=t86.get()&&t87.get();
			Bool t89;
			t89=t84.get()||t88.get();
			Long t90;
			t90=3+1000;
			Bool t91;
			t91=lvl__selector.get()==t90.get();
			Bool t92;
			t92=g->CompareString(ctx,lvt__objectname.get(),Ktextcolor__popup.get())==0;
			Bool t93;
			t93=t91.get()&&t92.get();
			if (!( t89.get()||t93.get())) goto _16;
		}
		{
			Txt t95;
			t95=lvt__objectname.get();
			Long t96;
			c.f.fLine=69;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t95.cv()},t96.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__color=t96.get();
		}
		lvl__color=lvl__color.get()-1;
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Long t98;
			t98=lvl__selector.get()-1000;
			Num t99;
			t99=lvz__alpha.get();
			Long t100;
			t100=lvl__blue.get();
			Long t101;
			t101=lvl__green.get();
			Long t102;
			t102=lvl__red.get();
			Long t103;
			t103=ltl__selected__objects.arrayElem(li.get()).get();
			Long t104;
			t104=lvl__area.get();
			c.f.fLine=77;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t104.cv(),lvl__area.cv(),(CV*)9,t98.cv(),nullptr,(CV*)9,t103.cv(),nullptr,(CV*)9,t102.cv(),lvl__red.cv(),(CV*)9,t101.cv(),lvl__green.cv(),(CV*)9,t100.cv(),lvl__blue.cv(),(CV*)9,t99.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		{
			Long t105;
			t105=lvl__blue.get();
			Long t106;
			t106=lvl__green.get();
			Long t107;
			t107=lvl__red.get();
			Long t108;
			t108=lvl__color.get();
			c.f.fLine=79;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,156).cv(),nullptr,t108.cv(),lvl__color.cv(),(CV*)9,t107.cv(),lvl__red.cv(),(CV*)9,t106.cv(),lvl__green.cv(),(CV*)9,t105.cv(),lvl__blue.cv(),(CV*)9},4)) goto _0;
			g->Check(ctx);
		}
		{
			Long t109;
			t109=lvl__selector.get()-1000;
			Num t110;
			t110=lvz__alpha.get();
			Long t111;
			t111=lvl__blue.get();
			Long t112;
			t112=lvl__green.get();
			Long t113;
			t113=lvl__red.get();
			Long t114;
			t114=ltl__selected__objects.arrayElem(li.get()).get();
			Long t115;
			t115=lvl__area.get();
			c.f.fLine=81;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,157).cv(),nullptr,t115.cv(),lvl__area.cv(),(CV*)9,t109.cv(),nullptr,(CV*)9,t114.cv(),nullptr,(CV*)9,t113.cv(),lvl__red.cv(),(CV*)9,t112.cv(),lvl__green.cv(),(CV*)9,t111.cv(),lvl__blue.cv(),(CV*)9,t110.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_16:
		{
			Long t116;
			t116=2+1000;
			Bool t117;
			t117=lvl__selector.get()==t116.get();
			Bool t118;
			t118=g->CompareString(ctx,lvt__objectname.get(),kMcPPBzEYtZk.get())==0;
			Bool t119;
			t119=t117.get()&&t118.get();
			Long t120;
			t120=1+1000;
			Bool t121;
			t121=lvl__selector.get()==t120.get();
			Bool t122;
			t122=g->CompareString(ctx,lvt__objectname.get(),kKHsc7SNAEyc.get())==0;
			Bool t123;
			t123=t121.get()&&t122.get();
			Bool t124;
			t124=t119.get()||t123.get();
			Long t125;
			t125=3+1000;
			Bool t126;
			t126=lvl__selector.get()==t125.get();
			Bool t127;
			t127=g->CompareString(ctx,lvt__objectname.get(),kia$iPDsWsfo.get())==0;
			Bool t128;
			t128=t126.get()&&t127.get();
			if (!( t124.get()||t128.get())) goto _17;
		}
		if (1!=li.get()) goto _18;
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Long t131;
			t131=lvl__selector.get()-1000;
			Num t132;
			t132=lvz__alpha.get();
			Long t133;
			t133=lvl__blue.get();
			Long t134;
			t134=lvl__green.get();
			Long t135;
			t135=lvl__red.get();
			Long t136;
			t136=ltl__selected__objects.arrayElem(li.get()).get();
			Long t137;
			t137=lvl__area.get();
			c.f.fLine=92;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t137.cv(),lvl__area.cv(),(CV*)9,t131.cv(),nullptr,(CV*)9,t136.cv(),nullptr,(CV*)9,t135.cv(),lvl__red.cv(),(CV*)9,t134.cv(),lvl__green.cv(),(CV*)9,t133.cv(),lvl__blue.cv(),(CV*)9,t132.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		{
			Long t138;
			t138=lvl__blue.get();
			Long t139;
			t139=lvl__green.get();
			Long t140;
			t140=lvl__red.get();
			Long t141;
			c.f.fLine=94;
			proc_INTERN__COLOR16BITTO8BIT(glob,ctx,3,3,(PCV[]){t140.cv(),t139.cv(),t138.cv()},t141.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__8bitcolor=t141.get();
		}
		{
			Long t142;
			c.f.fLine=96;
			if (g->Call(ctx,(PCV[]){t142.cv(),lvl__8bitcolor.cv()},1,956)) goto _0;
			g->Check(ctx);
			lvl__8bitcolor=t142.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _19;
		{
			Ptr t144;
			t144.adopt(g->CreatePointerLocal(ctx,lvl__red.cv(),-1,-1));
			Ptr t145;
			t145.adopt(g->CreatePointerLocal(ctx,lvl__green.cv(),-1,-1));
			Ptr t146;
			t146.adopt(g->CreatePointerLocal(ctx,lvl__blue.cv(),-1,-1));
			Long t147;
			t147=lvl__8bitcolor.get();
			c.f.fLine=100;
			proc_INTERN__COLOR8BITTO16BIT(glob,ctx,4,4,(PCV[]){t147.cv(),t144.cv(),t145.cv(),t146.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _20;
_19:
		{
			Bool t148;
			t148=false;
			lvf__ok=t148.get();
		}
_20:
_18:
		if (!(lvf__ok.get())) goto _21;
		{
			Long t149;
			t149=lvl__selector.get()-1000;
			Num t150;
			t150=lvz__alpha.get();
			Long t151;
			t151=lvl__blue.get();
			Long t152;
			t152=lvl__green.get();
			Long t153;
			t153=lvl__red.get();
			Long t154;
			t154=ltl__selected__objects.arrayElem(li.get()).get();
			Long t155;
			t155=lvl__area.get();
			c.f.fLine=110;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,157).cv(),nullptr,t155.cv(),lvl__area.cv(),(CV*)9,t149.cv(),nullptr,(CV*)9,t154.cv(),nullptr,(CV*)9,t153.cv(),lvl__red.cv(),(CV*)9,t152.cv(),lvl__green.cv(),(CV*)9,t151.cv(),lvl__blue.cv(),(CV*)9,t150.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
_21:
		goto _4;
_17:
		if (9!=lvl__selector.get()) goto _22;
		{
			Txt t157;
			t157=lvt__objectname.get();
			Num t158;
			c.f.fLine=116;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t157.cv()},t158.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__value=t158.get();
		}
		{
			Bool t159;
			t159=GEqual(glob,0,lvz__value.get());
			if (!(t159.get())) goto _23;
		}
		lvz__value=0x1p-2;
_23:
		{
			Txt t160;
			t160=K.get();
			Num t161;
			t161=lvz__value.get();
			Long t162;
			t162=lvl__selector.get();
			Long t163;
			t163=ltl__selected__objects.arrayElem(li.get()).get();
			Long t164;
			t164=lvl__area.get();
			c.f.fLine=122;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t164.cv(),lvl__area.cv(),(CV*)9,t163.cv(),nullptr,(CV*)9,t162.cv(),lvl__selector.cv(),(CV*)9,t161.cv(),lvz__value.cv(),(CV*)65537,t160.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_22:
		if (14!=lvl__selector.get()) goto _24;
		if (1!=lvl__type.get()) goto _25;
		{
			Txt t167;
			t167=lvt__objectname.get();
			Num t168;
			c.f.fLine=128;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t167.cv()},t168.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__value=t168.get();
		}
		{
			Bool t169;
			t169=GEqual(glob,0,lvz__value.get());
			if (!(t169.get())) goto _26;
		}
		lvz__value=0;
_26:
		{
			Txt t170;
			t170=K.get();
			Num t171;
			t171=lvz__value.get();
			Long t172;
			t172=lvl__selector.get();
			Long t173;
			t173=ltl__selected__objects.arrayElem(li.get()).get();
			Long t174;
			t174=lvl__area.get();
			c.f.fLine=134;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t174.cv(),lvl__area.cv(),(CV*)9,t173.cv(),nullptr,(CV*)9,t172.cv(),lvl__selector.cv(),(CV*)9,t171.cv(),lvz__value.cv(),(CV*)65537,t170.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_25:
		goto _4;
_24:
		if (8!=lvl__selector.get()) goto _27;
		if (2!=lvl__type.get()) goto _28;
		{
			Ptr t177;
			c.f.fLine=142;
			if (g->Call(ctx,(PCV[]){t177.cv(),Long(3).cv(),lvt__objectname.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t177.get();
		}
		{
			Bool t178;
			c.f.fLine=144;
			if (g->Call(ctx,(PCV[]){t178.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t179;
			t179=t178.get();
			Bool t180;
			t180=!(t179.get());
			if (!(t180.get())) goto _29;
		}
		{
			Txt t181;
			c.f.fLine=146;
			if (!g->GetValue(ctx,(PCV[]){t181.cv(),lvp__object.cv(),(PCV)-1,Long(0).cv(),nullptr})) goto _0;
			lvt__fontname=t181.get();
		}
		{
			Txt t182;
			t182=lvt__fontname.get();
			Num t183;
			t183=0;
			Long t184;
			t184=lvl__selector.get();
			Long t185;
			t185=ltl__selected__objects.arrayElem(li.get()).get();
			Long t186;
			t186=lvl__area.get();
			c.f.fLine=147;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t186.cv(),lvl__area.cv(),(CV*)9,t185.cv(),nullptr,(CV*)9,t184.cv(),lvl__selector.cv(),(CV*)9,t183.cv(),nullptr,(CV*)65537,t182.cv(),lvt__fontname.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_29:
_28:
		goto _4;
_27:
		if (15!=lvl__selector.get()) goto _30;
		if (2!=lvl__type.get()) goto _31;
		{
			Ptr t189;
			c.f.fLine=157;
			if (g->Call(ctx,(PCV[]){t189.cv(),Long(3).cv(),lvt__objectname.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t189.get();
		}
		{
			Bool t190;
			c.f.fLine=159;
			if (g->Call(ctx,(PCV[]){t190.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t191;
			t191=t190.get();
			Bool t192;
			t192=!(t191.get());
			if (!(t192.get())) goto _32;
		}
		{
			Num t193;
			c.f.fLine=161;
			if (!g->GetValue(ctx,(PCV[]){t193.cv(),lvp__object.cv(),(PCV)-1,Long(0).cv(),nullptr})) goto _0;
			lvz__fontsize=t193.get();
		}
		{
			Txt t194;
			t194=K.get();
			Num t195;
			t195=lvz__fontsize.get();
			Long t196;
			t196=lvl__selector.get();
			Long t197;
			t197=ltl__selected__objects.arrayElem(li.get()).get();
			Long t198;
			t198=lvl__area.get();
			c.f.fLine=162;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t198.cv(),lvl__area.cv(),(CV*)9,t197.cv(),nullptr,(CV*)9,t196.cv(),lvl__selector.cv(),(CV*)9,t195.cv(),lvz__fontsize.cv(),(CV*)65537,t194.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_32:
_31:
		goto _4;
_30:
		if (21!=lvl__selector.get()) goto _33;
		if (2!=lvl__type.get()) goto _34;
		{
			Ptr t201;
			c.f.fLine=172;
			if (g->Call(ctx,(PCV[]){t201.cv(),Long(3).cv(),lvt__objectname.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t201.get();
		}
		{
			Bool t202;
			c.f.fLine=174;
			if (g->Call(ctx,(PCV[]){t202.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t203;
			t203=t202.get();
			Bool t204;
			t204=!(t203.get());
			if (!(t204.get())) goto _35;
		}
		{
			Long t205;
			c.f.fLine=176;
			if (!g->GetValue(ctx,(PCV[]){t205.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			lvl__alignment=t205.get();
		}
		{
			Txt t206;
			t206=K.get();
			Num t207;
			t207=lvl__alignment.get();
			Long t208;
			t208=lvl__selector.get();
			Long t209;
			t209=ltl__selected__objects.arrayElem(li.get()).get();
			Long t210;
			t210=lvl__area.get();
			c.f.fLine=177;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t210.cv(),lvl__area.cv(),(CV*)9,t209.cv(),nullptr,(CV*)9,t208.cv(),lvl__selector.cv(),(CV*)9,t207.cv(),lvl__alignment.cv(),(CV*)65537,t206.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_35:
_34:
		goto _4;
_33:
		if (16!=lvl__selector.get()) goto _36;
		if (2!=lvl__type.get()) goto _37;
		{
			Long t213;
			t213=16;
			Long t214;
			t214=ltl__selected__objects.arrayElem(li.get()).get();
			Long t215;
			t215=lvl__area.get();
			Long t216;
			c.f.fLine=187;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t215.cv(),t214.cv(),t213.cv()},t216.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__fontstyle=t216.get();
		}
		{
			Long t217;
			t217=lvl__fontstyle.get()&1;
			Bool t219;
			t219=0<t217.get();
			Num t220;
			c.f.fLine=189;
			if (g->Call(ctx,(PCV[]){t220.cv(),t219.cv()},1,11)) goto _0;
			lvl__font__bold=(sLONG)lrint(t220.get());
		}
		{
			Long t222;
			t222=lvl__fontstyle.get()&2;
			Bool t224;
			t224=0<t222.get();
			Num t225;
			c.f.fLine=190;
			if (g->Call(ctx,(PCV[]){t225.cv(),t224.cv()},1,11)) goto _0;
			lvl__font__italic=(sLONG)lrint(t225.get());
		}
		{
			Long t227;
			t227=lvl__fontstyle.get()&4;
			Bool t229;
			t229=0<t227.get();
			Num t230;
			c.f.fLine=191;
			if (g->Call(ctx,(PCV[]){t230.cv(),t229.cv()},1,11)) goto _0;
			lvl__font__underline=(sLONG)lrint(t230.get());
		}
		{
			Long t232;
			t232=lvl__fontstyle.get()&8;
			Bool t234;
			t234=0<t232.get();
			Num t235;
			c.f.fLine=192;
			if (g->Call(ctx,(PCV[]){t235.cv(),t234.cv()},1,11)) goto _0;
			lvl__font__strikethrough=(sLONG)lrint(t235.get());
		}
		{
			Bool t237;
			t237=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__fett.get())==0;
			if (!(t237.get())) goto _39;
		}
		{
			Txt t238;
			t238=lvt__objectname.get();
			Long t239;
			c.f.fLine=196;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t238.cv()},t239.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__font__bold=t239.get();
		}
		goto _38;
_39:
		{
			Bool t240;
			t240=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__kursiv.get())==0;
			if (!(t240.get())) goto _40;
		}
		{
			Txt t241;
			t241=lvt__objectname.get();
			Long t242;
			c.f.fLine=199;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t241.cv()},t242.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__font__italic=t242.get();
		}
		goto _38;
_40:
		{
			Bool t243;
			t243=g->CompareString(ctx,lvt__objectname.get(),kFhai9F_sNOY.get())==0;
			if (!(t243.get())) goto _41;
		}
		{
			Txt t244;
			t244=lvt__objectname.get();
			Long t245;
			c.f.fLine=202;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t244.cv()},t245.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__font__underline=t245.get();
		}
		goto _38;
_41:
		{
			Bool t246;
			t246=g->CompareString(ctx,lvt__objectname.get(),kU2zkgE906Dw.get())==0;
			if (!(t246.get())) goto _42;
		}
		{
			Txt t247;
			t247=lvt__objectname.get();
			Long t248;
			c.f.fLine=205;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t247.cv()},t248.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__font__strikethrough=t248.get();
		}
		goto _38;
_42:
_38:
		{
			Long t249;
			t249=lvl__font__italic.get()*2;
			Long t250;
			t250=lvl__font__bold.get()+t249.get();
			Long t251;
			t251=lvl__font__underline.get()*4;
			Long t252;
			t252=t250.get()+t251.get();
			Long t253;
			t253=lvl__font__strikethrough.get()*8;
			lvl__fontstyle=t252.get()+t253.get();
		}
		{
			Txt t255;
			t255=K.get();
			Num t256;
			t256=lvl__fontstyle.get();
			Long t257;
			t257=lvl__selector.get();
			Long t258;
			t258=ltl__selected__objects.arrayElem(li.get()).get();
			Long t259;
			t259=lvl__area.get();
			c.f.fLine=211;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t259.cv(),lvl__area.cv(),(CV*)9,t258.cv(),nullptr,(CV*)9,t257.cv(),lvl__selector.cv(),(CV*)9,t256.cv(),lvl__fontstyle.cv(),(CV*)65537,t255.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_37:
		goto _4;
_36:
		{
			Long t260;
			t260=2+2000;
			Bool t261;
			t261=lvl__selector.get()==t260.get();
			Long t262;
			t262=3+2000;
			Bool t263;
			t263=lvl__selector.get()==t262.get();
			Bool t264;
			t264=t261.get()||t263.get();
			Long t265;
			t265=1+2000;
			Bool t266;
			t266=lvl__selector.get()==t265.get();
			if (!( t264.get()||t266.get())) goto _43;
		}
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Long t268;
			t268=lvl__selector.get()-2000;
			Num t269;
			t269=lvz__alpha.get();
			Long t270;
			t270=lvl__blue.get();
			Long t271;
			t271=lvl__green.get();
			Long t272;
			t272=lvl__red.get();
			Long t273;
			t273=ltl__selected__objects.arrayElem(li.get()).get();
			Long t274;
			t274=lvl__area.get();
			c.f.fLine=222;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t274.cv(),lvl__area.cv(),(CV*)9,t268.cv(),nullptr,(CV*)9,t273.cv(),nullptr,(CV*)9,t272.cv(),lvl__red.cv(),(CV*)9,t271.cv(),lvl__green.cv(),(CV*)9,t270.cv(),lvl__blue.cv(),(CV*)9,t269.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t275;
			t275=lvt__objectname.get();
			Num t276;
			c.f.fLine=224;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t275.cv()},t276.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__alpha=t276.get();
		}
		{
			Long t277;
			t277=lvl__selector.get()-2000;
			Num t278;
			t278=lvz__alpha.get();
			Long t279;
			t279=lvl__blue.get();
			Long t280;
			t280=lvl__green.get();
			Long t281;
			t281=lvl__red.get();
			Long t282;
			t282=ltl__selected__objects.arrayElem(li.get()).get();
			Long t283;
			t283=lvl__area.get();
			c.f.fLine=226;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,157).cv(),nullptr,t283.cv(),lvl__area.cv(),(CV*)9,t277.cv(),nullptr,(CV*)9,t282.cv(),nullptr,(CV*)9,t281.cv(),lvl__red.cv(),(CV*)9,t280.cv(),lvl__green.cv(),(CV*)9,t279.cv(),lvl__blue.cv(),(CV*)9,t278.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_43:
		if (18!=lvl__selector.get()) goto _44;
		if (2!=lvl__type.get()) goto _45;
		{
			Txt t286;
			t286=lvt__objectname.get();
			Long t287;
			c.f.fLine=231;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t286.cv()},t287.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t288;
			t288=K.get();
			Num t289;
			t289=t287.get();
			Long t290;
			t290=lvl__selector.get();
			Long t291;
			t291=ltl__selected__objects.arrayElem(li.get()).get();
			Long t292;
			t292=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t292.cv(),lvl__area.cv(),(CV*)9,t291.cv(),nullptr,(CV*)9,t290.cv(),lvl__selector.cv(),(CV*)9,t289.cv(),nullptr,(CV*)65537,t288.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_45:
		goto _4;
_44:
		if (22!=lvl__selector.get()) goto _46;
		{
			Txt t294;
			t294=lvt__objectname.get();
			Long t295;
			c.f.fLine=236;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t294.cv()},t295.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t296;
			t296=K.get();
			Num t297;
			t297=t295.get();
			Long t298;
			t298=lvl__selector.get();
			Long t299;
			t299=ltl__selected__objects.arrayElem(li.get()).get();
			Long t300;
			t300=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t300.cv(),lvl__area.cv(),(CV*)9,t299.cv(),nullptr,(CV*)9,t298.cv(),lvl__selector.cv(),(CV*)9,t297.cv(),nullptr,(CV*)65537,t296.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_46:
		if (75!=lvl__selector.get()) goto _47;
		{
			Txt t302;
			t302=lvt__objectname.get();
			Long t303;
			c.f.fLine=240;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t302.cv()},t303.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t304;
			t304=K.get();
			Num t305;
			t305=t303.get();
			Long t306;
			t306=lvl__selector.get();
			Long t307;
			t307=ltl__selected__objects.arrayElem(li.get()).get();
			Long t308;
			t308=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t308.cv(),lvl__area.cv(),(CV*)9,t307.cv(),nullptr,(CV*)9,t306.cv(),lvl__selector.cv(),(CV*)9,t305.cv(),nullptr,(CV*)65537,t304.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_47:
		if (76!=lvl__selector.get()) goto _48;
		{
			Txt t310;
			t310=lvt__objectname.get();
			Long t311;
			c.f.fLine=244;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t310.cv()},t311.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t312;
			t312=K.get();
			Num t313;
			t313=t311.get();
			Long t314;
			t314=lvl__selector.get();
			Long t315;
			t315=ltl__selected__objects.arrayElem(li.get()).get();
			Long t316;
			t316=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t316.cv(),lvl__area.cv(),(CV*)9,t315.cv(),nullptr,(CV*)9,t314.cv(),lvl__selector.cv(),(CV*)9,t313.cv(),nullptr,(CV*)65537,t312.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_48:
		if (87!=lvl__selector.get()) goto _49;
		{
			Txt t318;
			t318=lvt__objectname.get();
			Long t319;
			c.f.fLine=248;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t318.cv()},t319.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t320;
			t320=K.get();
			Num t321;
			t321=t319.get();
			Long t322;
			t322=lvl__selector.get();
			Long t323;
			t323=ltl__selected__objects.arrayElem(li.get()).get();
			Long t324;
			t324=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t324.cv(),lvl__area.cv(),(CV*)9,t323.cv(),nullptr,(CV*)9,t322.cv(),lvl__selector.cv(),(CV*)9,t321.cv(),nullptr,(CV*)65537,t320.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_49:
		if (77!=lvl__selector.get()) goto _50;
		{
			Txt t326;
			t326=lvt__objectname.get();
			Long t327;
			c.f.fLine=252;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t326.cv()},t327.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t328;
			t328=K.get();
			Num t329;
			t329=t327.get();
			Long t330;
			t330=lvl__selector.get();
			Long t331;
			t331=ltl__selected__objects.arrayElem(li.get()).get();
			Long t332;
			t332=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t332.cv(),lvl__area.cv(),(CV*)9,t331.cv(),nullptr,(CV*)9,t330.cv(),lvl__selector.cv(),(CV*)9,t329.cv(),nullptr,(CV*)65537,t328.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_50:
		if (39!=lvl__selector.get()) goto _51;
		{
			Txt t334;
			t334=lvt__objectname.get();
			Long t335;
			c.f.fLine=256;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t334.cv()},t335.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t336;
			t336=K.get();
			Num t337;
			t337=t335.get();
			Long t338;
			t338=lvl__selector.get();
			Long t339;
			t339=ltl__selected__objects.arrayElem(li.get()).get();
			Long t340;
			t340=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t340.cv(),lvl__area.cv(),(CV*)9,t339.cv(),nullptr,(CV*)9,t338.cv(),lvl__selector.cv(),(CV*)9,t337.cv(),nullptr,(CV*)65537,t336.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_51:
		if (41!=lvl__selector.get()) goto _52;
		{
			Txt t342;
			t342=lvt__objectname.get();
			Long t343;
			c.f.fLine=260;
			proc_OBJECT__GETCURRENTARRAYINDEX(glob,ctx,1,1,(PCV[]){t342.cv()},t343.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t344;
			t344=t343.get()-1;
			Txt t345;
			t345=K.get();
			Num t346;
			t346=t344.get();
			Long t347;
			t347=lvl__selector.get();
			Long t348;
			t348=ltl__selected__objects.arrayElem(li.get()).get();
			Long t349;
			t349=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t349.cv(),lvl__area.cv(),(CV*)9,t348.cv(),nullptr,(CV*)9,t347.cv(),lvl__selector.cv(),(CV*)9,t346.cv(),nullptr,(CV*)65537,t345.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_52:
		if (68!=lvl__selector.get()) goto _53;
		if (2!=lvl__type.get()) goto _54;
		{
			Ptr t352;
			c.f.fLine=266;
			if (g->Call(ctx,(PCV[]){t352.cv(),Long(3).cv(),Ktt__barcode.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t352.get();
		}
		{
			Ptr t353;
			c.f.fLine=267;
			if (g->Call(ctx,(PCV[]){t353.cv(),Long(3).cv(),Ktl__barcode.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t353.get();
		}
		{
			Bool t354;
			c.f.fLine=269;
			if (g->Call(ctx,(PCV[]){t354.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t355;
			t355=t354.get();
			Bool t356;
			t356=!(t355.get());
			Bool t357;
			if (g->Call(ctx,(PCV[]){t357.cv(),lvp__object2.cv()},1,315)) goto _0;
			Bool t358;
			t358=t357.get();
			Bool t359;
			t359=!(t358.get());
			if (!( t356.get()&&t359.get())) goto _55;
		}
		{
			Long t361;
			c.f.fLine=271;
			if (!g->GetValue(ctx,(PCV[]){t361.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			lvl__pos=t361.get();
		}
		{
			Bool t362;
			t362=0<lvl__pos.get();
			Ref t363;
			c.f.fLine=273;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t363.cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
			Long t364;
			if (g->Call(ctx,(PCV[]){t364.cv(),t363.cv()},1,274)) goto _0;
			Bool t365;
			t365=lvl__pos.get()<=t364.get();
			if (!( t362.get()&&t365.get())) goto _56;
		}
		{
			Long t367;
			c.f.fLine=275;
			if (!g->GetValue(ctx,(PCV[]){t367.cv(),lvp__object2.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			lvl__barcode=t367.get();
		}
		{
			Txt t368;
			t368=K.get();
			Num t369;
			t369=lvl__barcode.get();
			Long t370;
			t370=lvl__selector.get();
			Long t371;
			t371=ltl__selected__objects.arrayElem(li.get()).get();
			Long t372;
			t372=lvl__area.get();
			c.f.fLine=277;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t372.cv(),lvl__area.cv(),(CV*)9,t371.cv(),nullptr,(CV*)9,t370.cv(),lvl__selector.cv(),(CV*)9,t369.cv(),lvl__barcode.cv(),(CV*)65537,t368.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_56:
_55:
_54:
		goto _4;
_53:
		if (71!=lvl__selector.get()) goto _57;
		{
			Ptr t374;
			c.f.fLine=287;
			if (g->Call(ctx,(PCV[]){t374.cv(),Long(3).cv(),kOE66JInM1Vw.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t374.get();
		}
		{
			Ptr t375;
			c.f.fLine=288;
			if (g->Call(ctx,(PCV[]){t375.cv(),Long(3).cv(),kInRSiF$6ZYQ.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t375.get();
		}
		{
			Bool t376;
			c.f.fLine=290;
			if (g->Call(ctx,(PCV[]){t376.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t377;
			t377=t376.get();
			Bool t378;
			t378=!(t377.get());
			Bool t379;
			if (g->Call(ctx,(PCV[]){t379.cv(),lvp__object2.cv()},1,315)) goto _0;
			Bool t380;
			t380=t379.get();
			Bool t381;
			t381=!(t380.get());
			if (!( t378.get()&&t381.get())) goto _58;
		}
		{
			Long t383;
			c.f.fLine=292;
			if (!g->GetValue(ctx,(PCV[]){t383.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			lvl__pos=t383.get();
		}
		{
			Bool t384;
			t384=0<lvl__pos.get();
			Ref t385;
			c.f.fLine=294;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t385.cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
			Long t386;
			if (g->Call(ctx,(PCV[]){t386.cv(),t385.cv()},1,274)) goto _0;
			Bool t387;
			t387=lvl__pos.get()<=t386.get();
			if (!( t384.get()&&t387.get())) goto _59;
		}
		{
			Txt t389;
			c.f.fLine=296;
			if (!g->GetValue(ctx,(PCV[]){t389.cv(),lvp__object2.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			lvt__uuid=t389.get();
		}
		{
			Txt t390;
			t390=lvt__uuid.get();
			Num t391;
			t391=0;
			Long t392;
			t392=lvl__selector.get();
			Long t393;
			t393=ltl__selected__objects.arrayElem(li.get()).get();
			Long t394;
			t394=lvl__area.get();
			c.f.fLine=298;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t394.cv(),lvl__area.cv(),(CV*)9,t393.cv(),nullptr,(CV*)9,t392.cv(),lvl__selector.cv(),(CV*)9,t391.cv(),nullptr,(CV*)65537,t390.cv(),lvt__uuid.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_59:
_58:
		goto _4;
_57:
		if (73!=lvl__selector.get()) goto _60;
		{
			Ptr t396;
			c.f.fLine=306;
			if (g->Call(ctx,(PCV[]){t396.cv(),Long(3).cv(),k8Kva5G2MigM.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t396.get();
		}
		{
			Ptr t397;
			c.f.fLine=307;
			if (g->Call(ctx,(PCV[]){t397.cv(),Long(3).cv(),kxJeR8p29qug.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object3=t397.get();
		}
		{
			Bool t398;
			c.f.fLine=309;
			if (g->Call(ctx,(PCV[]){t398.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t399;
			t399=t398.get();
			Bool t400;
			t400=!(t399.get());
			Bool t401;
			if (g->Call(ctx,(PCV[]){t401.cv(),lvp__object3.cv()},1,315)) goto _0;
			Bool t402;
			t402=t401.get();
			Bool t403;
			t403=!(t402.get());
			if (!( t400.get()&&t403.get())) goto _61;
		}
		{
			Long t405;
			c.f.fLine=311;
			if (!g->GetValue(ctx,(PCV[]){t405.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			lvl__pos=t405.get();
		}
		{
			Long t406;
			c.f.fLine=312;
			if (!g->GetValue(ctx,(PCV[]){t406.cv(),lvp__object3.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			lvl__page=t406.get();
		}
		{
			Txt t407;
			t407=K.get();
			Num t408;
			t408=lvl__page.get();
			Long t409;
			t409=73;
			Long t410;
			t410=ltl__selected__objects.arrayElem(li.get()).get();
			Long t411;
			t411=lvl__area.get();
			c.f.fLine=314;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t411.cv(),lvl__area.cv(),(CV*)9,t410.cv(),nullptr,(CV*)9,t409.cv(),nullptr,(CV*)9,t408.cv(),lvl__page.cv(),(CV*)65537,t407.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_61:
		goto _4;
_60:
		if (44!=lvl__selector.get()) goto _62;
		goto _4;
_62:
		if (43!=lvl__selector.get()) goto _63;
		{
			Txt t414;
			t414=lvt__objectname.get();
			Num t415;
			c.f.fLine=344;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t414.cv()},t415.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t416;
			t416=K.get();
			Long t417;
			t417=lvl__selector.get();
			Long t418;
			t418=ltl__selected__objects.arrayElem(li.get()).get();
			Long t419;
			t419=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t419.cv(),lvl__area.cv(),(CV*)9,t418.cv(),nullptr,(CV*)9,t417.cv(),lvl__selector.cv(),(CV*)9,t415.cv(),nullptr,(CV*)65537,t416.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_63:
		if (83!=lvl__selector.get()) goto _64;
		if (2!=lvl__type.get()) goto _65;
		{
			Txt t422;
			t422=lvt__objectname.get();
			Num t423;
			c.f.fLine=350;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t422.cv()},t423.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__value=t423.get();
		}
		{
			Bool t424;
			t424=GEqual(glob,0,lvz__value.get());
			if (!(t424.get())) goto _66;
		}
		lvz__value=0;
_66:
		{
			Txt t425;
			t425=K.get();
			Num t426;
			t426=lvz__value.get();
			Long t427;
			t427=lvl__selector.get();
			Long t428;
			t428=ltl__selected__objects.arrayElem(li.get()).get();
			Long t429;
			t429=lvl__area.get();
			c.f.fLine=356;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t429.cv(),lvl__area.cv(),(CV*)9,t428.cv(),nullptr,(CV*)9,t427.cv(),lvl__selector.cv(),(CV*)9,t426.cv(),lvz__value.cv(),(CV*)65537,t425.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_65:
		goto _4;
_64:
_4:
		{
			Bool t430;
			t430=lvf__ok.get();
			Bool t431;
			t431=!(t430.get());
			if (!(t431.get())) goto _67;
		}
		{
			Ref t432;
			t432.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t433;
			c.f.fLine=363;
			if (g->Call(ctx,(PCV[]){t433.cv(),t432.cv()},1,274)) goto _0;
			li=t433.get()+1;
		}
_67:
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
		{
			Txt t437;
			Long t438;
			t438=lvl__area.get();
			c.f.fLine=368;
			proc_PAL__UPDATE__OBJECT(glob,ctx,1,2,(PCV[]){t438.cv(),t437.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
