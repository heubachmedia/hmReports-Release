extern int32_t vvl__fillcolor__popup;
extern int32_t vvl__framecolor__popup;
extern int32_t vvl__textcolor__popup;
extern Txt K;
extern Txt K_20_3F;
extern Txt K_2D;
extern Txt K_3F_20;
extern Txt K__multi;
extern Txt Kmultiple__values;
extern Txt Ktl__barcode;
extern Txt Ktt__alignment;
extern Txt Ktt__barcode;
extern Txt Ktt__fontlist;
extern Txt Ktz__fontsize;
extern Txt Kvl__obj__fett;
extern Txt Kvl__obj__kursiv;
extern Txt k4hohu6$w5_A;
extern Txt k8Kva5G2MigM;
extern Txt k8cOXlOUgsDM;
extern Txt kFhai9F_sNOY;
extern Txt kInRSiF$6ZYQ;
extern Txt kOE66JInM1Vw;
extern Txt kP$9AtjjuNts;
extern Txt kU2zkgE906Dw;
extern Txt kUl1oIpkCBzs;
extern Txt kdUWci5DLwjU;
extern Txt krWW$2pCfgsM;
extern Txt kv3sUmuKJsq8;
extern Txt kxJeR8p29qug;
Asm4d_Proc proc_INTERN__COLOR16BITTO8BIT;
Asm4d_Proc proc_INTERN__COLORGETINDEXFROM16BIT;
Asm4d_Proc proc_INTERN__GETLOCALIZEDOBJECTTYPE;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYREAL;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYTEXT;
Asm4d_Proc proc_OBJECT__GETPOINTER;
Asm4d_Proc proc_OBJECT__SETLONGINT;
Asm4d_Proc proc_OBJECT__SETREAL;
Asm4d_Proc proc_OBJECT__SETTEXT;
Asm4d_Proc proc_STRING__COMPARE;
extern unsigned char D_proc_PAL__UPDATE__OBJECT__SETMULTI[];
void proc_PAL__UPDATE__OBJECT__SETMULTI( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__OBJECT__SETMULTI);
	if (!ctx->doingAbort) try {
		Txt lvt__last__value;
		Long v0;
		Num lvz__value;
		Txt lvt__uuid;
		Ptr lvp__object;
		Txt lvt__objectname;
		Long v1;
		Num lvz__top;
		Num lvz__right;
		Long lvl__fontstyle;
		Long v2;
		Num lvz__last__value;
		Long li;
		Txt lvt__value;
		Long lvl__red;
		Long v3;
		Num lvz__alpha;
		Long lvl__pageid;
		Long lvl__area;
		Ptr lvp__objects__types;
		Long lvl__green;
		Bool lvf__multi;
		Ptr lvp__object2;
		Ptr lvp__object3;
		Ptr lvp__object4;
		Long lvl__blue;
		Num lvz__bottom;
		Long lvl__selector;
		Long lvl__pos;
		Ptr lvp__objects;
		Num lvz__left;
		Long lvl__type;
		lvp__objects=Parm<Ptr>(inParams,inNbParam,1).get();
		lvp__objects__types=Parm<Ptr>(inParams,inNbParam,2).get();
		lvl__selector=Parm<Long>(inParams,inNbParam,3).get();
		lvl__area=Parm<Long>(inParams,inNbParam,4).get();
		lvt__objectname=Parm<Txt>(inParams,inNbParam,5).get();
		{
			Bool t0;
			t0=false;
			lvf__multi=t0.get();
		}
		{
			Bool t1;
			t1=4==lvl__selector.get();
			Bool t2;
			t2=8==lvl__selector.get();
			Bool t3;
			t3=t1.get()||t2.get();
			Bool t4;
			t4=71==lvl__selector.get();
			if (!( t3.get()||t4.get())) goto _2;
		}
		li=1;
		{
			Ref t6;
			c.f.fLine=17;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t6.cv(),lvp__objects.cv(),(PCV)-1,nullptr})) goto _0;
			Long t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv()},1,274)) goto _0;
			v0=t7.get();
		}
		goto _3;
_4:
		{
			Long t8;
			c.f.fLine=19;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),lvp__objects__types.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			lvl__type=t8.get();
		}
		{
			Long t9;
			t9=lvl__selector.get();
			Long t10;
			c.f.fLine=20;
			if (!g->GetValue(ctx,(PCV[]){t10.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t11;
			t11=lvl__area.get();
			Txt t12;
			proc_INTERN__GETOBJECTPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t11.cv(),t10.cv(),t9.cv()},t12.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__last__value=t12.get();
		}
		if (1!=li.get()) goto _5;
		lvt__value=lvt__last__value.get();
		if (8!=lvl__selector.get()) goto _7;
		{
			Ptr t15;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t15.cv(),Long(3).cv(),Ktt__fontlist.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t15.get();
		}
		{
			Bool t16;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t16.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t17;
			t17=t16.get();
			Bool t18;
			t18=!(t17.get());
			if (!(t18.get())) goto _8;
		}
		{
			Txt t19;
			t19=lvt__value.get();
			c.f.fLine=31;
			if (!g->SetValue(ctx,(PCV[]){t19.cv(),lvp__object.cv(),(PCV)-1,Long(0).cv(),nullptr})) goto _0;
		}
_8:
		goto _6;
_7:
		if (71!=lvl__selector.get()) goto _9;
		if (10!=lvl__type.get()) goto _10;
		{
			Ptr t22;
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){t22.cv(),Long(3).cv(),kOE66JInM1Vw.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t22.get();
		}
		{
			Ptr t23;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t23.cv(),Long(3).cv(),kInRSiF$6ZYQ.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t23.get();
		}
		{
			Ptr t24;
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){t24.cv(),Long(3).cv(),kxJeR8p29qug.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object3=t24.get();
		}
		{
			Bool t25;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t25.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t26;
			t26=t25.get();
			Bool t27;
			t27=!(t26.get());
			Bool t28;
			if (g->Call(ctx,(PCV[]){t28.cv(),lvp__object2.cv()},1,315)) goto _0;
			Bool t29;
			t29=t28.get();
			Bool t30;
			t30=!(t29.get());
			if (!( t27.get()&&t30.get())) goto _11;
		}
		{
			Ref t32;
			c.f.fLine=44;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t32.cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
			Long t33;
			if (g->Call(ctx,(PCV[]){t33.cv(),t32.cv(),lvt__value.cv()},2,230)) goto _0;
			lvl__pos=t33.get();
		}
		if (0>=lvl__pos.get()) goto _12;
		{
			Long t35;
			t35=lvl__pos.get();
			c.f.fLine=48;
			if (!g->SetValue(ctx,(PCV[]){t35.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		}
		goto _13;
_12:
		{
			Ref t36;
			c.f.fLine=52;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t36.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			Long t37;
			if (g->Call(ctx,(PCV[]){t37.cv(),t36.cv()},1,274)) goto _0;
			if (1!=t37.get()) goto _14;
		}
		{
			Ref t39;
			c.f.fLine=54;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t39.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t39.cv(),K_2D.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t40;
			c.f.fLine=55;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t40.cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t40.cv(),K.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t41;
			c.f.fLine=56;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t41.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t41.cv(),Long(0).cv()},2,911)) goto _0;
			g->Check(ctx);
		}
_14:
		{
			Long t42;
			t42=72;
			Long t43;
			c.f.fLine=60;
			if (!g->GetValue(ctx,(PCV[]){t43.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t44;
			t44=lvl__area.get();
			Txt t45;
			proc_INTERN__GETOBJECTPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t44.cv(),t43.cv(),t42.cv()},t45.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t46;
			g->AddString(K_3F_20.get(),t45.get(),t46.get());
			Txt t47;
			g->AddString(t46.get(),K_20_3F.get(),t47.get());
			Ref t48;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t48.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t48.cv(),t47.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t49;
			c.f.fLine=61;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t49.cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t49.cv(),lvt__value.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Long t50;
			t50=73;
			Long t51;
			c.f.fLine=62;
			if (!g->GetValue(ctx,(PCV[]){t51.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t52;
			t52=lvl__area.get();
			Long t53;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t52.cv(),t51.cv(),t50.cv()},t53.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Ref t54;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t54.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t54.cv(),t53.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t55;
			c.f.fLine=64;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t55.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			Long t56;
			if (g->Call(ctx,(PCV[]){t56.cv(),t55.cv()},1,274)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t56.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		}
_13:
_11:
_10:
		goto _6;
_9:
		{
			Txt t57;
			t57=lvt__value.get();
			Txt t58;
			t58=lvt__objectname.get();
			c.f.fLine=74;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t58.cv(),t57.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_6:
		goto _15;
_5:
		{
			Txt t59;
			t59=lvt__last__value.get();
			Txt t60;
			t60=lvt__value.get();
			Bool t61;
			c.f.fLine=80;
			proc_STRING__COMPARE(glob,ctx,2,2,(PCV[]){t60.cv(),t59.cv()},t61.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t62;
			t62=t61.get();
			Bool t63;
			t63=!(t62.get());
			if (!(t63.get())) goto _16;
		}
		{
			Bool t64;
			t64=true;
			lvf__multi=t64.get();
		}
		{
			Ref t65;
			c.f.fLine=82;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t65.cv(),lvp__objects.cv(),(PCV)-1,nullptr})) goto _0;
			Long t66;
			if (g->Call(ctx,(PCV[]){t66.cv(),t65.cv()},1,274)) goto _0;
			li=t66.get()+1;
		}
_16:
_15:
		li=li.get()+1;
_3:
		if (li.get()<=v0.get()) goto _4;
		goto _17;
_2:
		li=1;
		{
			Ref t70;
			c.f.fLine=91;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t70.cv(),lvp__objects.cv(),(PCV)-1,nullptr})) goto _0;
			Long t71;
			if (g->Call(ctx,(PCV[]){t71.cv(),t70.cv()},1,274)) goto _0;
			v2=t71.get();
		}
		goto _18;
_19:
		{
			Long t72;
			c.f.fLine=93;
			if (!g->GetValue(ctx,(PCV[]){t72.cv(),lvp__objects__types.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			lvl__type=t72.get();
		}
		{
			Bool t73;
			t73=-1==lvl__selector.get();
			Bool t74;
			t74=-2==lvl__selector.get();
			Bool t75;
			t75=t73.get()||t74.get();
			Bool t76;
			t76=-3==lvl__selector.get();
			Bool t77;
			t77=t75.get()||t76.get();
			Bool t78;
			t78=-4==lvl__selector.get();
			Bool t79;
			t79=t77.get()||t78.get();
			Bool t80;
			t80=-5==lvl__selector.get();
			Bool t81;
			t81=t79.get()||t80.get();
			Bool t82;
			t82=-6==lvl__selector.get();
			if (!( t81.get()||t82.get())) goto _20;
		}
		lvz__left=0;
		lvz__top=0;
		lvz__right=0;
		lvz__bottom=0;
		{
			Num t84;
			t84=lvz__bottom.get();
			Num t85;
			t85=lvz__right.get();
			Num t86;
			t86=lvz__top.get();
			Num t87;
			t87=lvz__left.get();
			Long t88;
			c.f.fLine=102;
			if (!g->GetValue(ctx,(PCV[]){t88.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t89;
			t89=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,39).cv(),nullptr,t89.cv(),lvl__area.cv(),(CV*)9,t88.cv(),nullptr,(CV*)9,t87.cv(),lvz__left.cv(),(CV*)65537,t86.cv(),lvz__top.cv(),(CV*)65537,t85.cv(),lvz__right.cv(),(CV*)65537,t84.cv(),lvz__bottom.cv(),(CV*)65537},6)) goto _0;
			g->Check(ctx);
		}
		{
			Num t90;
			t90=lvz__left.get();
			Long t91;
			t91=lvl__area.get();
			Num t92;
			c.f.fLine=104;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t92.cv(),t91.cv(),lvl__area.cv(),(CV*)9,t90.cv(),lvz__left.cv(),(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Num t93;
			if (g->Call(ctx,(PCV[]){t93.cv(),t92.cv(),Long(2).cv()},2,94)) goto _0;
			lvz__left=t93.get();
		}
		{
			Num t94;
			t94=lvz__top.get();
			Long t95;
			t95=lvl__area.get();
			Num t96;
			c.f.fLine=105;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t96.cv(),t95.cv(),lvl__area.cv(),(CV*)9,t94.cv(),lvz__top.cv(),(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Num t97;
			if (g->Call(ctx,(PCV[]){t97.cv(),t96.cv(),Long(2).cv()},2,94)) goto _0;
			lvz__top=t97.get();
		}
		{
			Num t98;
			t98=lvz__right.get();
			Long t99;
			t99=lvl__area.get();
			Num t100;
			c.f.fLine=106;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t100.cv(),t99.cv(),lvl__area.cv(),(CV*)9,t98.cv(),lvz__right.cv(),(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Num t101;
			if (g->Call(ctx,(PCV[]){t101.cv(),t100.cv(),Long(2).cv()},2,94)) goto _0;
			lvz__right=t101.get();
		}
		{
			Num t102;
			t102=lvz__bottom.get();
			Long t103;
			t103=lvl__area.get();
			Num t104;
			c.f.fLine=107;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,68).cv(),t104.cv(),t103.cv(),lvl__area.cv(),(CV*)9,t102.cv(),lvz__bottom.cv(),(CV*)65537},2)) goto _0;
			g->Check(ctx);
			Num t105;
			if (g->Call(ctx,(PCV[]){t105.cv(),t104.cv(),Long(2).cv()},2,94)) goto _0;
			lvz__bottom=t105.get();
		}
_20:
		if (-1!=lvl__selector.get()) goto _22;
		lvz__last__value=lvz__left.get();
		goto _21;
_22:
		if (-2!=lvl__selector.get()) goto _23;
		lvz__last__value=lvz__top.get();
		goto _21;
_23:
		if (-3!=lvl__selector.get()) goto _24;
		lvz__last__value=lvz__right.get();
		goto _21;
_24:
		if (-4!=lvl__selector.get()) goto _25;
		lvz__last__value=lvz__bottom.get();
		goto _21;
_25:
		if (-5!=lvl__selector.get()) goto _26;
		lvz__last__value=lvz__right.get()-lvz__left.get();
		goto _21;
_26:
		if (-6!=lvl__selector.get()) goto _27;
		lvz__last__value=lvz__bottom.get()-lvz__top.get();
		goto _21;
_27:
		if (-7!=lvl__selector.get()) goto _28;
		{
			Num t115;
			c.f.fLine=131;
			if (!g->GetValue(ctx,(PCV[]){t115.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			lvz__last__value=t115.get();
		}
		goto _21;
_28:
		{
			Long t116;
			t116=2+1000;
			if (lvl__selector.get()!=t116.get()) goto _29;
		}
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Num t118;
			t118=lvz__alpha.get();
			Long t119;
			t119=lvl__blue.get();
			Long t120;
			t120=lvl__green.get();
			Long t121;
			t121=lvl__red.get();
			Long t122;
			c.f.fLine=139;
			if (!g->GetValue(ctx,(PCV[]){t122.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t123;
			t123=2;
			Long t124;
			t124=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t124.cv(),lvl__area.cv(),(CV*)9,t123.cv(),nullptr,(CV*)9,t122.cv(),nullptr,(CV*)9,t121.cv(),lvl__red.cv(),(CV*)9,t120.cv(),lvl__green.cv(),(CV*)9,t119.cv(),lvl__blue.cv(),(CV*)9,t118.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		{
			Long t125;
			t125=lvl__blue.get();
			Long t126;
			t126=lvl__green.get();
			Long t127;
			t127=lvl__red.get();
			Long t128;
			c.f.fLine=140;
			proc_INTERN__COLOR16BITTO8BIT(glob,ctx,3,3,(PCV[]){t127.cv(),t126.cv(),t125.cv()},t128.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__last__value=t128.get();
		}
		{
			Long t130;
			t130=lvl__blue.get();
			Long t131;
			t131=lvl__green.get();
			Long t132;
			t132=lvl__red.get();
			Long t133;
			c.f.fLine=142;
			proc_INTERN__COLORGETINDEXFROM16BIT(glob,ctx,3,3,(PCV[]){t132.cv(),t131.cv(),t130.cv()},t133.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Var<Long>(ctx,vvl__framecolor__popup)=t133.get();
			Touch(ctx,vvl__framecolor__popup);
		}
		goto _21;
_29:
		{
			Long t134;
			t134=2+2000;
			if (lvl__selector.get()!=t134.get()) goto _30;
		}
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Num t136;
			t136=lvz__alpha.get();
			Long t137;
			t137=lvl__blue.get();
			Long t138;
			t138=lvl__green.get();
			Long t139;
			t139=lvl__red.get();
			Long t140;
			c.f.fLine=151;
			if (!g->GetValue(ctx,(PCV[]){t140.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t141;
			t141=2;
			Long t142;
			t142=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t142.cv(),lvl__area.cv(),(CV*)9,t141.cv(),nullptr,(CV*)9,t140.cv(),nullptr,(CV*)9,t139.cv(),lvl__red.cv(),(CV*)9,t138.cv(),lvl__green.cv(),(CV*)9,t137.cv(),lvl__blue.cv(),(CV*)9,t136.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		lvz__last__value=lvz__alpha.get();
		goto _21;
_30:
		{
			Long t143;
			t143=1+1000;
			if (lvl__selector.get()!=t143.get()) goto _31;
		}
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Num t145;
			t145=lvz__alpha.get();
			Long t146;
			t146=lvl__blue.get();
			Long t147;
			t147=lvl__green.get();
			Long t148;
			t148=lvl__red.get();
			Long t149;
			c.f.fLine=161;
			if (!g->GetValue(ctx,(PCV[]){t149.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t150;
			t150=1;
			Long t151;
			t151=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t151.cv(),lvl__area.cv(),(CV*)9,t150.cv(),nullptr,(CV*)9,t149.cv(),nullptr,(CV*)9,t148.cv(),lvl__red.cv(),(CV*)9,t147.cv(),lvl__green.cv(),(CV*)9,t146.cv(),lvl__blue.cv(),(CV*)9,t145.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		{
			Long t152;
			t152=lvl__blue.get();
			Long t153;
			t153=lvl__green.get();
			Long t154;
			t154=lvl__red.get();
			Long t155;
			c.f.fLine=162;
			proc_INTERN__COLOR16BITTO8BIT(glob,ctx,3,3,(PCV[]){t154.cv(),t153.cv(),t152.cv()},t155.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__last__value=t155.get();
		}
		{
			Long t157;
			t157=lvl__blue.get();
			Long t158;
			t158=lvl__green.get();
			Long t159;
			t159=lvl__red.get();
			Long t160;
			c.f.fLine=164;
			proc_INTERN__COLORGETINDEXFROM16BIT(glob,ctx,3,3,(PCV[]){t159.cv(),t158.cv(),t157.cv()},t160.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Var<Long>(ctx,vvl__fillcolor__popup)=t160.get();
			Touch(ctx,vvl__fillcolor__popup);
		}
		goto _21;
_31:
		{
			Long t161;
			t161=1+2000;
			if (lvl__selector.get()!=t161.get()) goto _32;
		}
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Num t163;
			t163=lvz__alpha.get();
			Long t164;
			t164=lvl__blue.get();
			Long t165;
			t165=lvl__green.get();
			Long t166;
			t166=lvl__red.get();
			Long t167;
			c.f.fLine=173;
			if (!g->GetValue(ctx,(PCV[]){t167.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t168;
			t168=1;
			Long t169;
			t169=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t169.cv(),lvl__area.cv(),(CV*)9,t168.cv(),nullptr,(CV*)9,t167.cv(),nullptr,(CV*)9,t166.cv(),lvl__red.cv(),(CV*)9,t165.cv(),lvl__green.cv(),(CV*)9,t164.cv(),lvl__blue.cv(),(CV*)9,t163.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		lvz__last__value=lvz__alpha.get();
		goto _21;
_32:
		{
			Long t170;
			t170=3+1000;
			if (lvl__selector.get()!=t170.get()) goto _33;
		}
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Num t172;
			t172=lvz__alpha.get();
			Long t173;
			t173=lvl__blue.get();
			Long t174;
			t174=lvl__green.get();
			Long t175;
			t175=lvl__red.get();
			Long t176;
			c.f.fLine=183;
			if (!g->GetValue(ctx,(PCV[]){t176.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t177;
			t177=3;
			Long t178;
			t178=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t178.cv(),lvl__area.cv(),(CV*)9,t177.cv(),nullptr,(CV*)9,t176.cv(),nullptr,(CV*)9,t175.cv(),lvl__red.cv(),(CV*)9,t174.cv(),lvl__green.cv(),(CV*)9,t173.cv(),lvl__blue.cv(),(CV*)9,t172.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		{
			Long t179;
			t179=lvl__blue.get();
			Long t180;
			t180=lvl__green.get();
			Long t181;
			t181=lvl__red.get();
			Long t182;
			c.f.fLine=184;
			proc_INTERN__COLOR16BITTO8BIT(glob,ctx,3,3,(PCV[]){t181.cv(),t180.cv(),t179.cv()},t182.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__last__value=t182.get();
		}
		{
			Long t184;
			t184=lvl__blue.get();
			Long t185;
			t185=lvl__green.get();
			Long t186;
			t186=lvl__red.get();
			Long t187;
			c.f.fLine=186;
			proc_INTERN__COLORGETINDEXFROM16BIT(glob,ctx,3,3,(PCV[]){t186.cv(),t185.cv(),t184.cv()},t187.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Var<Long>(ctx,vvl__textcolor__popup)=t187.get();
			Touch(ctx,vvl__textcolor__popup);
		}
		goto _21;
_33:
		{
			Long t188;
			t188=3+2000;
			if (lvl__selector.get()!=t188.get()) goto _34;
		}
		lvl__red=0;
		lvl__green=0;
		lvl__blue=0;
		lvz__alpha=0;
		{
			Num t190;
			t190=lvz__alpha.get();
			Long t191;
			t191=lvl__blue.get();
			Long t192;
			t192=lvl__green.get();
			Long t193;
			t193=lvl__red.get();
			Long t194;
			c.f.fLine=195;
			if (!g->GetValue(ctx,(PCV[]){t194.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t195;
			t195=3;
			Long t196;
			t196=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,158).cv(),nullptr,t196.cv(),lvl__area.cv(),(CV*)9,t195.cv(),nullptr,(CV*)9,t194.cv(),nullptr,(CV*)9,t193.cv(),lvl__red.cv(),(CV*)9,t192.cv(),lvl__green.cv(),(CV*)9,t191.cv(),lvl__blue.cv(),(CV*)9,t190.cv(),lvz__alpha.cv(),(CV*)65537},7)) goto _0;
			g->Check(ctx);
		}
		lvz__last__value=lvz__alpha.get();
		goto _21;
_34:
		{
			Bool t197;
			t197=16==lvl__selector.get();
			Bool t198;
			t198=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__fett.get())==0;
			if (!( t197.get()&&t198.get())) goto _35;
		}
		{
			Long t200;
			t200=lvl__selector.get();
			Long t201;
			c.f.fLine=199;
			if (!g->GetValue(ctx,(PCV[]){t201.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t202;
			t202=lvl__area.get();
			Long t203;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t202.cv(),t201.cv(),t200.cv()},t203.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__fontstyle=t203.get();
		}
		{
			Long t204;
			t204=lvl__fontstyle.get()&1;
			Bool t206;
			t206=0<t204.get();
			Num t207;
			c.f.fLine=200;
			if (g->Call(ctx,(PCV[]){t207.cv(),t206.cv()},1,11)) goto _0;
			lvz__last__value=t207.get();
		}
		goto _21;
_35:
		{
			Bool t208;
			t208=16==lvl__selector.get();
			Bool t209;
			t209=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__kursiv.get())==0;
			if (!( t208.get()&&t209.get())) goto _36;
		}
		{
			Long t211;
			t211=lvl__selector.get();
			Long t212;
			c.f.fLine=203;
			if (!g->GetValue(ctx,(PCV[]){t212.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t213;
			t213=lvl__area.get();
			Long t214;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t213.cv(),t212.cv(),t211.cv()},t214.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__fontstyle=t214.get();
		}
		{
			Long t215;
			t215=lvl__fontstyle.get()&2;
			Bool t217;
			t217=0<t215.get();
			Num t218;
			c.f.fLine=204;
			if (g->Call(ctx,(PCV[]){t218.cv(),t217.cv()},1,11)) goto _0;
			lvz__last__value=t218.get();
		}
		goto _21;
_36:
		{
			Bool t219;
			t219=16==lvl__selector.get();
			Bool t220;
			t220=g->CompareString(ctx,lvt__objectname.get(),kFhai9F_sNOY.get())==0;
			if (!( t219.get()&&t220.get())) goto _37;
		}
		{
			Long t222;
			t222=lvl__selector.get();
			Long t223;
			c.f.fLine=207;
			if (!g->GetValue(ctx,(PCV[]){t223.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t224;
			t224=lvl__area.get();
			Long t225;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t224.cv(),t223.cv(),t222.cv()},t225.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__fontstyle=t225.get();
		}
		{
			Long t226;
			t226=lvl__fontstyle.get()&4;
			Bool t228;
			t228=0<t226.get();
			Num t229;
			c.f.fLine=208;
			if (g->Call(ctx,(PCV[]){t229.cv(),t228.cv()},1,11)) goto _0;
			lvz__last__value=t229.get();
		}
		goto _21;
_37:
		{
			Bool t230;
			t230=16==lvl__selector.get();
			Bool t231;
			t231=g->CompareString(ctx,lvt__objectname.get(),kU2zkgE906Dw.get())==0;
			if (!( t230.get()&&t231.get())) goto _38;
		}
		{
			Long t233;
			t233=lvl__selector.get();
			Long t234;
			c.f.fLine=211;
			if (!g->GetValue(ctx,(PCV[]){t234.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t235;
			t235=lvl__area.get();
			Long t236;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t235.cv(),t234.cv(),t233.cv()},t236.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__fontstyle=t236.get();
		}
		{
			Long t237;
			t237=lvl__fontstyle.get()&8;
			Bool t239;
			t239=0<t237.get();
			Num t240;
			c.f.fLine=212;
			if (g->Call(ctx,(PCV[]){t240.cv(),t239.cv()},1,11)) goto _0;
			lvz__last__value=t240.get();
		}
		goto _21;
_38:
		if (73!=lvl__selector.get()) goto _39;
		if (10!=lvl__type.get()) goto _40;
		{
			Long t243;
			t243=73;
			Long t244;
			c.f.fLine=218;
			if (!g->GetValue(ctx,(PCV[]){t244.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t245;
			t245=lvl__area.get();
			Num t246;
			proc_INTERN__GETOBJECTPROPERTYREAL(glob,ctx,3,3,(PCV[]){t245.cv(),t244.cv(),t243.cv()},t246.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__pageid=(sLONG)lrint(t246.get());
		}
		{
			Long t248;
			t248=71;
			Long t249;
			c.f.fLine=220;
			if (!g->GetValue(ctx,(PCV[]){t249.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t250;
			t250=lvl__area.get();
			Txt t251;
			proc_INTERN__GETOBJECTPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t250.cv(),t249.cv(),t248.cv()},t251.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__uuid=t251.get();
		}
		{
			Bool t252;
			t252=g->CompareString(ctx,lvt__uuid.get(),K.get())!=0;
			if (!(t252.get())) goto _41;
		}
		if (0!=lvl__pageid.get()) goto _42;
		lvz__last__value=0;
		goto _43;
_42:
		lvz__last__value=lvl__pageid.get();
_43:
		goto _44;
_41:
		lvz__last__value=0;
_44:
		{
			Ptr t255;
			c.f.fLine=238;
			if (g->Call(ctx,(PCV[]){t255.cv(),Long(3).cv(),kxJeR8p29qug.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object3=t255.get();
		}
		{
			Ptr t256;
			c.f.fLine=239;
			if (g->Call(ctx,(PCV[]){t256.cv(),Long(3).cv(),k8Kva5G2MigM.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object4=t256.get();
		}
		{
			Ref t257;
			c.f.fLine=241;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t257.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			Long t258;
			if (g->Call(ctx,(PCV[]){t258.cv(),t257.cv(),lvz__last__value.cv()},2,230)) goto _0;
			lvl__pos=t258.get();
		}
		if (0>=lvl__pos.get()) goto _45;
		{
			Long t260;
			t260=lvl__pos.get();
			c.f.fLine=244;
			if (!g->SetValue(ctx,(PCV[]){t260.cv(),lvp__object4.cv(),(PCV)-1,nullptr})) goto _0;
		}
		goto _46;
_45:
		c.f.fLine=246;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object4.cv(),(PCV)-1,nullptr})) goto _0;
_46:
_40:
		goto _21;
_39:
		{
			Long t261;
			t261=lvl__selector.get();
			Long t262;
			c.f.fLine=252;
			if (!g->GetValue(ctx,(PCV[]){t262.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t263;
			t263=lvl__area.get();
			Num t264;
			proc_INTERN__GETOBJECTPROPERTYREAL(glob,ctx,3,3,(PCV[]){t263.cv(),t262.cv(),t261.cv()},t264.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvz__last__value=t264.get();
		}
_21:
		if (1!=li.get()) goto _47;
		lvz__value=lvz__last__value.get();
		if (1!=lvl__selector.get()) goto _49;
		{
			Long t267;
			c.f.fLine=262;
			if (!g->GetValue(ctx,(PCV[]){t267.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Long t268;
			t268=lvl__area.get();
			Txt t269;
			proc_INTERN__GETLOCALIZEDOBJECTTYPE(glob,ctx,2,2,(PCV[]){t268.cv(),t267.cv()},t269.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t270;
			t270=lvt__objectname.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t270.cv(),t269.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _48;
_49:
		if (9!=lvl__selector.get()) goto _50;
		{
			Long t272;
			t272=(sLONG)lrint(lvz__value.get());
			Txt t273;
			t273=k4hohu6$w5_A.get();
			c.f.fLine=265;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t273.cv(),t272.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Num t274;
			t274=lvz__value.get();
			Txt t275;
			t275=lvt__objectname.get();
			c.f.fLine=266;
			proc_OBJECT__SETREAL(glob,ctx,2,2,(PCV[]){t275.cv(),t274.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _48;
_50:
		if (83!=lvl__selector.get()) goto _51;
		{
			Long t277;
			t277=(sLONG)lrint(lvz__value.get());
			Txt t278;
			t278=kdUWci5DLwjU.get();
			c.f.fLine=269;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t278.cv(),t277.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Num t279;
			t279=lvz__value.get();
			Txt t280;
			t280=lvt__objectname.get();
			c.f.fLine=270;
			proc_OBJECT__SETREAL(glob,ctx,2,2,(PCV[]){t280.cv(),t279.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _48;
_51:
		if (14!=lvl__selector.get()) goto _52;
		{
			Long t282;
			t282=(sLONG)lrint(lvz__value.get());
			Txt t283;
			t283=kP$9AtjjuNts.get();
			c.f.fLine=273;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t283.cv(),t282.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Num t284;
			t284=lvz__value.get();
			Txt t285;
			t285=lvt__objectname.get();
			c.f.fLine=274;
			proc_OBJECT__SETREAL(glob,ctx,2,2,(PCV[]){t285.cv(),t284.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _48;
_52:
		{
			Long t286;
			t286=2+1000;
			if (lvl__selector.get()!=t286.get()) goto _53;
		}
		c.f.fLine=277;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__objectname.cv(),Long(0).cv(),lvz__value.cv()},4,628)) goto _0;
		g->Check(ctx);
		goto _48;
_53:
		{
			Long t288;
			t288=1+1000;
			if (lvl__selector.get()!=t288.get()) goto _54;
		}
		c.f.fLine=280;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__objectname.cv(),Long(0).cv(),lvz__value.cv()},4,628)) goto _0;
		g->Check(ctx);
		goto _48;
_54:
		{
			Long t290;
			t290=3+1000;
			if (lvl__selector.get()!=t290.get()) goto _55;
		}
		c.f.fLine=283;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__objectname.cv(),Long(0).cv(),lvz__value.cv()},4,628)) goto _0;
		g->Check(ctx);
		goto _48;
_55:
		if (15!=lvl__selector.get()) goto _56;
		{
			Ptr t293;
			c.f.fLine=287;
			if (g->Call(ctx,(PCV[]){t293.cv(),Long(3).cv(),Ktz__fontsize.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t293.get();
		}
		{
			Bool t294;
			c.f.fLine=288;
			if (g->Call(ctx,(PCV[]){t294.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t295;
			t295=t294.get();
			Bool t296;
			t296=!(t295.get());
			if (!(t296.get())) goto _57;
		}
		{
			Num t297;
			t297=lvz__value.get();
			c.f.fLine=289;
			if (!g->SetValue(ctx,(PCV[]){t297.cv(),lvp__object.cv(),(PCV)-1,Long(0).cv(),nullptr})) goto _0;
		}
_57:
		goto _48;
_56:
		if (21!=lvl__selector.get()) goto _58;
		{
			Ptr t299;
			c.f.fLine=294;
			if (g->Call(ctx,(PCV[]){t299.cv(),Long(3).cv(),Ktt__alignment.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t299.get();
		}
		{
			Bool t300;
			c.f.fLine=295;
			if (g->Call(ctx,(PCV[]){t300.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t301;
			t301=t300.get();
			Bool t302;
			t302=!(t301.get());
			if (!(t302.get())) goto _59;
		}
		{
			Num t303;
			t303=lvz__value.get();
			c.f.fLine=296;
			if (!g->SetValue(ctx,(PCV[]){t303.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		}
_59:
		goto _48;
_58:
		{
			Long t304;
			t304=2+2000;
			if (lvl__selector.get()!=t304.get()) goto _60;
		}
		{
			Long t306;
			t306=(sLONG)lrint(lvz__value.get());
			Txt t307;
			t307=kv3sUmuKJsq8.get();
			c.f.fLine=300;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t307.cv(),t306.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Num t308;
			t308=lvz__value.get();
			Txt t309;
			t309=lvt__objectname.get();
			c.f.fLine=301;
			proc_OBJECT__SETREAL(glob,ctx,2,2,(PCV[]){t309.cv(),t308.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _48;
_60:
		{
			Long t310;
			t310=1+2000;
			if (lvl__selector.get()!=t310.get()) goto _61;
		}
		{
			Long t312;
			t312=(sLONG)lrint(lvz__value.get());
			Txt t313;
			t313=kUl1oIpkCBzs.get();
			c.f.fLine=304;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t313.cv(),t312.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Num t314;
			t314=lvz__value.get();
			Txt t315;
			t315=lvt__objectname.get();
			c.f.fLine=305;
			proc_OBJECT__SETREAL(glob,ctx,2,2,(PCV[]){t315.cv(),t314.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _48;
_61:
		{
			Long t316;
			t316=3+2000;
			if (lvl__selector.get()!=t316.get()) goto _62;
		}
		{
			Long t318;
			t318=(sLONG)lrint(lvz__value.get());
			Txt t319;
			t319=krWW$2pCfgsM.get();
			c.f.fLine=308;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t319.cv(),t318.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Num t320;
			t320=lvz__value.get();
			Txt t321;
			t321=lvt__objectname.get();
			c.f.fLine=309;
			proc_OBJECT__SETREAL(glob,ctx,2,2,(PCV[]){t321.cv(),t320.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _48;
_62:
		if (68!=lvl__selector.get()) goto _63;
		{
			Ptr t323;
			c.f.fLine=313;
			if (g->Call(ctx,(PCV[]){t323.cv(),Long(3).cv(),Ktt__barcode.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t323.get();
		}
		{
			Ptr t324;
			c.f.fLine=314;
			if (g->Call(ctx,(PCV[]){t324.cv(),Long(3).cv(),Ktl__barcode.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t324.get();
		}
		{
			Bool t325;
			c.f.fLine=316;
			if (g->Call(ctx,(PCV[]){t325.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t326;
			t326=t325.get();
			Bool t327;
			t327=!(t326.get());
			Bool t328;
			if (g->Call(ctx,(PCV[]){t328.cv(),lvp__object2.cv()},1,315)) goto _0;
			Bool t329;
			t329=t328.get();
			Bool t330;
			t330=!(t329.get());
			if (!( t327.get()&&t330.get())) goto _64;
		}
		{
			Ref t332;
			c.f.fLine=318;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t332.cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
			Long t333;
			if (g->Call(ctx,(PCV[]){t333.cv(),t332.cv(),lvz__value.cv()},2,230)) goto _0;
			lvl__pos=t333.get();
		}
		if (0>=lvl__pos.get()) goto _65;
		{
			Long t335;
			t335=lvl__pos.get();
			c.f.fLine=321;
			if (!g->SetValue(ctx,(PCV[]){t335.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		}
		goto _66;
_65:
		c.f.fLine=323;
		if (!g->SetValue(ctx,(PCV[]){Num(1).cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
_66:
_64:
		goto _48;
_63:
		if (73!=lvl__selector.get()) goto _67;
		goto _48;
_67:
		if (44!=lvl__selector.get()) goto _68;
		goto _48;
_68:
		if (41!=lvl__selector.get()) goto _69;
		{
			Txt t339;
			t339=k8cOXlOUgsDM.get();
			Ptr t340;
			c.f.fLine=356;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t339.cv()},t340.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__object=t340.get();
		}
		{
			Bool t341;
			c.f.fLine=358;
			if (g->Call(ctx,(PCV[]){t341.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t342;
			t342=t341.get();
			Bool t343;
			t343=!(t342.get());
			if (!(t343.get())) goto _70;
		}
		{
			Num t344;
			t344=lvz__value.get()+1;
			c.f.fLine=360;
			if (!g->SetValue(ctx,(PCV[]){t344.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		}
_70:
		goto _48;
_69:
		{
			Num t345;
			t345=lvz__value.get();
			Txt t346;
			t346=lvt__objectname.get();
			c.f.fLine=365;
			proc_OBJECT__SETREAL(glob,ctx,2,2,(PCV[]){t346.cv(),t345.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_48:
		goto _71;
_47:
		{
			Bool t347;
			t347=!Equal(glob,lvz__last__value.get(),lvz__value.get());
			if (!(t347.get())) goto _72;
		}
		{
			Bool t348;
			t348=true;
			lvf__multi=t348.get();
		}
		{
			Ref t349;
			c.f.fLine=373;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t349.cv(),lvp__objects.cv(),(PCV)-1,nullptr})) goto _0;
			Long t350;
			if (g->Call(ctx,(PCV[]){t350.cv(),t349.cv()},1,274)) goto _0;
			li=t350.get()+1;
		}
_72:
_71:
		li=li.get()+1;
_18:
		if (li.get()<=v2.get()) goto _19;
_17:
		if (!(lvf__multi.get())) goto _73;
		{
			Txt t354;
			g->AddString(lvt__objectname.get(),K__multi.get(),t354.get());
			Bool t355;
			t355=true;
			Bool t356;
			t356=t355.get();
			c.f.fLine=384;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),t354.cv(),t356.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t357;
			t357=false;
			Bool t358;
			t358=t357.get();
			c.f.fLine=385;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__objectname.cv(),t358.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		if (5!=lvl__selector.get()) goto _75;
		{
			Txt t360;
			g->AddString(lvt__objectname.get(),K__multi.get(),t360.get());
			Long t361;
			t361=2;
			c.f.fLine=389;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t360.cv(),t361.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_75:
		if (6!=lvl__selector.get()) goto _76;
		{
			Txt t363;
			g->AddString(lvt__objectname.get(),K__multi.get(),t363.get());
			Long t364;
			t364=2;
			c.f.fLine=392;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t363.cv(),t364.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_76:
		if (16!=lvl__selector.get()) goto _77;
		{
			Txt t366;
			g->AddString(lvt__objectname.get(),K__multi.get(),t366.get());
			Long t367;
			t367=2;
			c.f.fLine=395;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t366.cv(),t367.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_77:
		if (18!=lvl__selector.get()) goto _78;
		{
			Txt t369;
			g->AddString(lvt__objectname.get(),K__multi.get(),t369.get());
			Long t370;
			t370=2;
			c.f.fLine=398;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t369.cv(),t370.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_78:
		if (22!=lvl__selector.get()) goto _79;
		{
			Txt t372;
			g->AddString(lvt__objectname.get(),K__multi.get(),t372.get());
			Long t373;
			t373=2;
			c.f.fLine=401;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t372.cv(),t373.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_79:
		if (75!=lvl__selector.get()) goto _80;
		{
			Txt t375;
			g->AddString(lvt__objectname.get(),K__multi.get(),t375.get());
			Long t376;
			t376=2;
			c.f.fLine=404;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t375.cv(),t376.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_80:
		if (76!=lvl__selector.get()) goto _81;
		{
			Txt t378;
			g->AddString(lvt__objectname.get(),K__multi.get(),t378.get());
			Long t379;
			t379=2;
			c.f.fLine=407;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t378.cv(),t379.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_81:
		if (87!=lvl__selector.get()) goto _82;
		{
			Txt t381;
			g->AddString(lvt__objectname.get(),K__multi.get(),t381.get());
			Long t382;
			t382=2;
			c.f.fLine=410;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t381.cv(),t382.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_82:
		if (77!=lvl__selector.get()) goto _83;
		{
			Txt t384;
			g->AddString(lvt__objectname.get(),K__multi.get(),t384.get());
			Long t385;
			t385=2;
			c.f.fLine=413;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t384.cv(),t385.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_83:
		if (39!=lvl__selector.get()) goto _84;
		{
			Txt t387;
			g->AddString(lvt__objectname.get(),K__multi.get(),t387.get());
			Long t388;
			t388=2;
			c.f.fLine=416;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t387.cv(),t388.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _74;
_84:
		{
			Txt t389;
			g->AddString(lvt__objectname.get(),K__multi.get(),t389.get());
			Txt t390;
			c.f.fLine=419;
			if (g->Call(ctx,(PCV[]){t390.cv(),Kmultiple__values.cv()},1,991)) goto _0;
			g->Check(ctx);
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t389.cv(),t390.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_74:
		goto _85;
_73:
		{
			Txt t391;
			g->AddString(lvt__objectname.get(),K__multi.get(),t391.get());
			Bool t392;
			t392=false;
			Bool t393;
			t393=t392.get();
			c.f.fLine=425;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),t391.cv(),t393.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t394;
			t394=true;
			Bool t395;
			t395=t394.get();
			c.f.fLine=426;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__objectname.cv(),t395.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
_85:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
