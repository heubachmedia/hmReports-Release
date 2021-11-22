extern Txt K;
extern Txt KKeine;
extern Txt K_2D;
extern Txt Kaktuelle__seite;
extern Txt Kfillcolor;
extern Txt Kframecolor;
extern Txt Kklapp__allgemein;
extern Txt Kklapp__groesse;
extern Txt Kklapp__optionen;
extern Txt Kklapp__rahmen;
extern Txt Kklapp__text;
extern Txt Klinks;
extern Txt Krechts;
extern Txt Kstandard;
extern Txt Ktextcolor;
extern Txt Ktextcolor__multi;
extern Txt Ktextcolor__popup;
extern Txt Ktt__alignment;
extern Txt Ktt__barcode;
extern Txt Ktt__fontlist;
extern Txt Ktz__fontsize;
extern Txt Kvl__current__area;
extern Txt Kvl__obj__fett;
extern Txt Kvl__obj__id;
extern Txt Kvl__obj__kursiv;
extern Txt Kvl__obj__moveable;
extern Txt Kvl__obj__print;
extern Txt Kvt__obj__name;
extern Txt Kvt__obj__typ;
extern Txt Kvz__bottom;
extern Txt Kvz__height;
extern Txt Kvz__left;
extern Txt Kvz__obj__rotation;
extern Txt Kvz__obj__rounding;
extern Txt Kvz__right;
extern Txt Kvz__top;
extern Txt Kvz__width;
extern Txt Kzentriert;
extern Txt k0duLkYZa39c;
extern Txt k7MPyktfpIeU;
extern Txt k8Kva5G2MigM;
extern Txt k8cOXlOUgsDM;
extern Txt kBRxf_aO5uPM;
extern Txt kDQ8kkpdHzS0;
extern Txt kEcgutsDrN6E;
extern Txt kFhai9F_sNOY;
extern Txt kInRSiF$6ZYQ;
extern Txt kLZOrm$ZkhuQ;
extern Txt kMcPPBzEYtZk;
extern Txt kOE66JInM1Vw;
extern Txt kOgjvMpI2t9o;
extern Txt kOwNeHfIfgdk;
extern Txt kP$9AtjjuNts;
extern Txt kTSkcKqJ_oTg;
extern Txt kU2zkgE906Dw;
extern Txt kZGuEL2VUZYQ;
extern Txt kaiyce67OJ4E;
extern Txt kdEIiV5O$KzQ;
extern Txt kdUWci5DLwjU;
extern Txt keJsXRPvW4Oo;
extern Txt khc1yIzAqVRY;
extern Txt ki4K74cJJIUI;
extern Txt kia$iPDsWsfo;
extern Txt krCNK3qtOezs;
extern Txt krWW$2pCfgsM;
extern Txt kwnm0WY$F_GQ;
extern Txt kxJeR8p29qug;
extern Txt kzdRK9x3e1WI;
Asm4d_Proc proc_ARR__COPY;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_INTERN__GETOBJECTTYPE;
Asm4d_Proc proc_INTERN__GETPAGEPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETUNITNAME;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_OBJECT__SETLONGINT;
Asm4d_Proc proc_OBJECT__SETTEXT;
Asm4d_Proc proc_PAL__UPDATE__OBJECT__SETMULTI;
Asm4d_Proc proc_PARSE__GETREPORTPROPERTYTEXT;
extern unsigned char D_proc_PAL__UPDATE__OBJECT[];
void proc_PAL__UPDATE__OBJECT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__OBJECT);
	if (!ctx->doingAbort) try {
		Long v0;
		Ptr lvp__object;
		Long lvl__objectID;
		Txt lvt__objectname;
		Value_array_longint ltl__selected__objects;
		Long v1;
		Long lvl__type__multi;
		Long lvl__size;
		Value_array_longint ltl__selected__objects__types;
		Long v2;
		Long li;
		Txt lvt__unit;
		Long v3;
		Long lvl__anz__pages;
		Long v4;
		Value_array_text ltt__reports__uuid;
		Bool lvf__publish;
		Long v5;
		Long lvl__area;
		Long v7;
		Bool lvf__object__subreport;
		Long v8;
		Txt lvt__current__report;
		Long v9;
		Ptr lvp__object2;
		Bool lvf__object__text;
		Ptr lvp__object3;
		Ptr lvp__object4;
		Value_array_text ltt__reports__name;
		Long v11;
		Long v10;
		Long v6;
		Long v12;
		Long lvl__pos;
		Long v13;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=inNbExplicitParam;
			if (1>=t0.get()) goto _2;
		}
		lvt__objectname=Parm<Txt>(inParams,inNbParam,2).get();
		goto _3;
_2:
		lvt__objectname=K.get();
_3:
		{
			Ref t2;
			t2.setLocalRef(ctx,ltl__selected__objects.cv());
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){nullptr,t2.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t3;
			t3.setLocalRef(ctx,ltl__selected__objects__types.cv());
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){nullptr,t3.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Long t4;
			t4=1;
			Long t5;
			t5=3;
			Long t6;
			t6=lvl__area.get();
			c.f.fLine=17;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,31).cv(),nullptr,t6.cv(),lvl__area.cv(),(CV*)9,t5.cv(),nullptr,(CV*)9,t4.cv(),nullptr,(CV*)9,ltl__selected__objects.cv(),nullptr,(CV*)65543},4)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t7;
			t7.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t8;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv()},1,274)) goto _0;
			if (0>=t8.get()) goto _4;
		}
		{
			Ptr t10;
			t10.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Ref t11;
			t11.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t12;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv()},1,274)) goto _0;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t10.cv(),t12.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		li=1;
		{
			Ref t13;
			t13.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t14;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t14.cv(),t13.cv()},1,274)) goto _0;
			v0=t14.get();
		}
		goto _5;
_6:
		{
			Long t15;
			t15=ltl__selected__objects.arrayElem(li.get()).get();
			Long t16;
			t16=lvl__area.get();
			Long t17;
			c.f.fLine=24;
			proc_INTERN__GETOBJECTTYPE(glob,ctx,2,2,(PCV[]){t16.cv(),t15.cv()},t17.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltl__selected__objects__types.arrayElem(li.get())=t17.get();
		}
		li=li.get()+1;
_5:
		if (li.get()<=v0.get()) goto _6;
		lvl__objectID=ltl__selected__objects.arrayElem(1).get();
		{
			Long t20;
			t20=lvl__area.get();
			Txt t21;
			t21=Kvl__current__area.get();
			c.f.fLine=29;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t21.cv(),t20.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		lvl__type__multi=-1;
		{
			Bool t22;
			t22=false;
			lvf__object__text=t22.get();
		}
		{
			Bool t23;
			t23=false;
			lvf__object__subreport=t23.get();
		}
		li=1;
		{
			Ref t24;
			t24.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t25;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv()},1,274)) goto _0;
			v2=t25.get();
		}
		goto _7;
_8:
		{
			Bool t26;
			t26=ltl__selected__objects__types.arrayElem(li.get()).get()==lvl__type__multi.get();
			Bool t27;
			t27=-1==lvl__type__multi.get();
			if (!( t26.get()||t27.get())) goto _9;
		}
		lvl__type__multi=ltl__selected__objects__types.arrayElem(li.get()).get();
		goto _10;
_9:
		lvl__type__multi=-1;
		{
			Ref t29;
			t29.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t30;
			c.f.fLine=43;
			if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv()},1,274)) goto _0;
			li=t30.get()+1;
		}
_10:
		li=li.get()+1;
_7:
		if (li.get()<=v2.get()) goto _8;
		li=1;
		{
			Ref t34;
			t34.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t35;
			c.f.fLine=48;
			if (g->Call(ctx,(PCV[]){t35.cv(),t34.cv()},1,274)) goto _0;
			v4=t35.get();
		}
		goto _11;
_12:
		if (2!=ltl__selected__objects__types.arrayElem(li.get()).get()) goto _14;
		{
			Bool t37;
			t37=true;
			lvf__object__text=t37.get();
		}
		goto _13;
_14:
		if (10!=ltl__selected__objects__types.arrayElem(li.get()).get()) goto _15;
		{
			Bool t39;
			t39=true;
			lvf__object__subreport=t39.get();
		}
		goto _13;
_15:
_13:
		li=li.get()+1;
_11:
		if (li.get()<=v4.get()) goto _12;
		{
			Txt t42;
			t42=Kklapp__allgemein.get();
			Long t43;
			c.f.fLine=64;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t42.cv()},t43.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t44;
			t44=1==t43.get();
			if (!(t44.get())) goto _16;
		}
		{
			Long t45;
			t45=lvt__objectname.get().fLength;
			Bool t46;
			t46=0==t45.get();
			Bool t47;
			t47=g->CompareString(ctx,lvt__objectname.get(),Kvt__obj__name.get())==0;
			if (!( t46.get()||t47.get())) goto _17;
		}
		{
			Ptr t49;
			t49.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t50;
			t50.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t51;
			t51=Kvt__obj__name.get();
			Long t52;
			t52=lvl__area.get();
			Long t53;
			t53=4;
			c.f.fLine=67;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t49.cv(),t50.cv(),t53.cv(),t52.cv(),t51.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_17:
		{
			Long t54;
			t54=lvt__objectname.get().fLength;
			Bool t55;
			t55=0==t54.get();
			Bool t56;
			t56=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__id.get())==0;
			if (!( t55.get()||t56.get())) goto _18;
		}
		{
			Ptr t58;
			t58.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t59;
			t59.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t60;
			t60=Kvl__obj__id.get();
			Long t61;
			t61=lvl__area.get();
			Long t62;
			t62=-7;
			c.f.fLine=71;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t58.cv(),t59.cv(),t62.cv(),t61.cv(),t60.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_18:
		{
			Long t63;
			t63=lvt__objectname.get().fLength;
			Bool t64;
			t64=0==t63.get();
			Bool t65;
			t65=g->CompareString(ctx,lvt__objectname.get(),Kvt__obj__typ.get())==0;
			if (!( t64.get()||t65.get())) goto _19;
		}
		{
			Ptr t67;
			t67.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t68;
			t68.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t69;
			t69=Kvt__obj__typ.get();
			Long t70;
			t70=lvl__area.get();
			Long t71;
			t71=1;
			c.f.fLine=75;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t67.cv(),t68.cv(),t71.cv(),t70.cv(),t69.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_19:
_16:
		{
			Txt t72;
			t72=Kklapp__groesse.get();
			Long t73;
			c.f.fLine=83;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t72.cv()},t73.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t74;
			t74=1==t73.get();
			if (!(t74.get())) goto _20;
		}
		{
			Long t75;
			t75=lvl__area.get();
			Txt t76;
			c.f.fLine=85;
			proc_INTERN__GETUNITNAME(glob,ctx,1,1,(PCV[]){t75.cv()},t76.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__unit=t76.get();
		}
		{
			Txt t77;
			t77=lvt__unit.get();
			Txt t78;
			t78=kZGuEL2VUZYQ.get();
			c.f.fLine=87;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t78.cv(),t77.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t79;
			t79=lvt__unit.get();
			Txt t80;
			t80=kzdRK9x3e1WI.get();
			c.f.fLine=88;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t80.cv(),t79.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t81;
			t81=lvt__objectname.get().fLength;
			Bool t82;
			t82=0==t81.get();
			Bool t83;
			t83=g->CompareString(ctx,lvt__objectname.get(),Kvz__left.get())==0;
			if (!( t82.get()||t83.get())) goto _21;
		}
		{
			Ptr t85;
			t85.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t86;
			t86.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t87;
			t87=Kvz__left.get();
			Long t88;
			t88=lvl__area.get();
			Long t89;
			t89=-1;
			c.f.fLine=91;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t85.cv(),t86.cv(),t89.cv(),t88.cv(),t87.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_21:
		{
			Long t90;
			t90=lvt__objectname.get().fLength;
			Bool t91;
			t91=0==t90.get();
			Bool t92;
			t92=g->CompareString(ctx,lvt__objectname.get(),Kvz__top.get())==0;
			if (!( t91.get()||t92.get())) goto _22;
		}
		{
			Ptr t94;
			t94.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t95;
			t95.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t96;
			t96=Kvz__top.get();
			Long t97;
			t97=lvl__area.get();
			Long t98;
			t98=-2;
			c.f.fLine=95;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t94.cv(),t95.cv(),t98.cv(),t97.cv(),t96.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_22:
		{
			Long t99;
			t99=lvt__objectname.get().fLength;
			Bool t100;
			t100=0==t99.get();
			Bool t101;
			t101=g->CompareString(ctx,lvt__objectname.get(),Kvz__right.get())==0;
			if (!( t100.get()||t101.get())) goto _23;
		}
		{
			Ptr t103;
			t103.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t104;
			t104.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t105;
			t105=Kvz__right.get();
			Long t106;
			t106=lvl__area.get();
			Long t107;
			t107=-3;
			c.f.fLine=99;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t103.cv(),t104.cv(),t107.cv(),t106.cv(),t105.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_23:
		{
			Long t108;
			t108=lvt__objectname.get().fLength;
			Bool t109;
			t109=0==t108.get();
			Bool t110;
			t110=g->CompareString(ctx,lvt__objectname.get(),Kvz__bottom.get())==0;
			if (!( t109.get()||t110.get())) goto _24;
		}
		{
			Ptr t112;
			t112.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t113;
			t113.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t114;
			t114=Kvz__bottom.get();
			Long t115;
			t115=lvl__area.get();
			Long t116;
			t116=-4;
			c.f.fLine=103;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t112.cv(),t113.cv(),t116.cv(),t115.cv(),t114.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_24:
		{
			Long t117;
			t117=lvt__objectname.get().fLength;
			Bool t118;
			t118=0==t117.get();
			Bool t119;
			t119=g->CompareString(ctx,lvt__objectname.get(),Kvz__width.get())==0;
			if (!( t118.get()||t119.get())) goto _25;
		}
		{
			Ptr t121;
			t121.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t122;
			t122.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t123;
			t123=Kvz__width.get();
			Long t124;
			t124=lvl__area.get();
			Long t125;
			t125=-5;
			c.f.fLine=107;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t121.cv(),t122.cv(),t125.cv(),t124.cv(),t123.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_25:
		{
			Long t126;
			t126=lvt__objectname.get().fLength;
			Bool t127;
			t127=0==t126.get();
			Bool t128;
			t128=g->CompareString(ctx,lvt__objectname.get(),Kvz__height.get())==0;
			if (!( t127.get()||t128.get())) goto _26;
		}
		{
			Ptr t130;
			t130.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t131;
			t131.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t132;
			t132=Kvz__height.get();
			Long t133;
			t133=lvl__area.get();
			Long t134;
			t134=-6;
			c.f.fLine=111;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t130.cv(),t131.cv(),t134.cv(),t133.cv(),t132.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_26:
_20:
		{
			Txt t135;
			t135=Kklapp__optionen.get();
			Long t136;
			c.f.fLine=119;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t135.cv()},t136.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t137;
			t137=1==t136.get();
			if (!(t137.get())) goto _27;
		}
		{
			Long t138;
			t138=lvt__objectname.get().fLength;
			Bool t139;
			t139=0==t138.get();
			Bool t140;
			t140=g->CompareString(ctx,lvt__objectname.get(),ki4K74cJJIUI.get())==0;
			if (!( t139.get()||t140.get())) goto _28;
		}
		{
			Ptr t142;
			t142.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t143;
			t143.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t144;
			t144=ki4K74cJJIUI.get();
			Long t145;
			t145=lvl__area.get();
			Long t146;
			t146=22;
			c.f.fLine=122;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t142.cv(),t143.cv(),t146.cv(),t145.cv(),t144.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_28:
		{
			Long t147;
			t147=lvt__objectname.get().fLength;
			Bool t148;
			t148=0==t147.get();
			Bool t149;
			t149=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__print.get())==0;
			if (!( t148.get()||t149.get())) goto _29;
		}
		{
			Ptr t151;
			t151.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t152;
			t152.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t153;
			t153=Kvl__obj__print.get();
			Long t154;
			t154=lvl__area.get();
			Long t155;
			t155=75;
			c.f.fLine=126;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t151.cv(),t152.cv(),t155.cv(),t154.cv(),t153.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_29:
		{
			Long t156;
			t156=lvt__objectname.get().fLength;
			Bool t157;
			t157=0==t156.get();
			Bool t158;
			t158=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__moveable.get())==0;
			if (!( t157.get()||t158.get())) goto _30;
		}
		{
			Ptr t160;
			t160.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t161;
			t161.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t162;
			t162=Kvl__obj__moveable.get();
			Long t163;
			t163=lvl__area.get();
			Long t164;
			t164=76;
			c.f.fLine=130;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t160.cv(),t161.cv(),t164.cv(),t163.cv(),t162.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_30:
		{
			Long t165;
			t165=lvt__objectname.get().fLength;
			Bool t166;
			t166=0==t165.get();
			Bool t167;
			t167=g->CompareString(ctx,lvt__objectname.get(),k0duLkYZa39c.get())==0;
			if (!( t166.get()||t167.get())) goto _31;
		}
		{
			Ptr t169;
			t169.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t170;
			t170.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t171;
			t171=k0duLkYZa39c.get();
			Long t172;
			t172=lvl__area.get();
			Long t173;
			t173=87;
			c.f.fLine=134;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t169.cv(),t170.cv(),t173.cv(),t172.cv(),t171.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_31:
		{
			Long t174;
			t174=lvt__objectname.get().fLength;
			Bool t175;
			t175=0==t174.get();
			Bool t176;
			t176=g->CompareString(ctx,lvt__objectname.get(),khc1yIzAqVRY.get())==0;
			if (!( t175.get()||t176.get())) goto _32;
		}
		{
			Ptr t178;
			t178.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t179;
			t179.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t180;
			t180=khc1yIzAqVRY.get();
			Long t181;
			t181=lvl__area.get();
			Long t182;
			t182=77;
			c.f.fLine=138;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t178.cv(),t179.cv(),t182.cv(),t181.cv(),t180.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_32:
		{
			Long t183;
			t183=lvt__objectname.get().fLength;
			Bool t184;
			t184=0==t183.get();
			Bool t185;
			t185=g->CompareString(ctx,lvt__objectname.get(),Kvz__obj__rotation.get())==0;
			if (!( t184.get()||t185.get())) goto _33;
		}
		{
			Ptr t187;
			t187.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t188;
			t188.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t189;
			t189=Kvz__obj__rotation.get();
			Long t190;
			t190=lvl__area.get();
			Long t191;
			t191=43;
			c.f.fLine=142;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t187.cv(),t188.cv(),t191.cv(),t190.cv(),t189.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_33:
		{
			Long t192;
			t192=lvt__objectname.get().fLength;
			Bool t193;
			t193=0==t192.get();
			Bool t194;
			t194=g->CompareString(ctx,lvt__objectname.get(),kTSkcKqJ_oTg.get())==0;
			if (!( t193.get()||t194.get())) goto _34;
		}
		{
			Ptr t196;
			t196.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t197;
			t197.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t198;
			t198=kTSkcKqJ_oTg.get();
			Long t199;
			t199=lvl__area.get();
			Long t200;
			t200=39;
			c.f.fLine=146;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t196.cv(),t197.cv(),t200.cv(),t199.cv(),t198.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_34:
		{
			Long t201;
			t201=lvt__objectname.get().fLength;
			Bool t202;
			t202=0==t201.get();
			Bool t203;
			t203=g->CompareString(ctx,lvt__objectname.get(),k8cOXlOUgsDM.get())==0;
			if (!( t202.get()||t203.get())) goto _35;
		}
		{
			Ptr t205;
			t205.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t206;
			t206.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t207;
			t207=k8cOXlOUgsDM.get();
			Long t208;
			t208=lvl__area.get();
			Long t209;
			t209=41;
			c.f.fLine=150;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t205.cv(),t206.cv(),t209.cv(),t208.cv(),t207.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_35:
_27:
		{
			Txt t210;
			t210=Kklapp__rahmen.get();
			Long t211;
			c.f.fLine=158;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t210.cv()},t211.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t212;
			t212=1==t211.get();
			if (!(t212.get())) goto _36;
		}
		{
			Long t213;
			t213=lvt__objectname.get().fLength;
			Bool t214;
			t214=0==t213.get();
			Bool t215;
			t215=g->CompareString(ctx,lvt__objectname.get(),k7MPyktfpIeU.get())==0;
			if (!( t214.get()||t215.get())) goto _37;
		}
		{
			Bool t218;
			t218=4!=lvl__type__multi.get();
			c.f.fLine=161;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k7MPyktfpIeU.cv(),t218.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t219;
			t219.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t220;
			t220.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t221;
			t221=k7MPyktfpIeU.get();
			Long t222;
			t222=lvl__area.get();
			Long t223;
			t223=5;
			c.f.fLine=162;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t219.cv(),t220.cv(),t223.cv(),t222.cv(),t221.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_37:
		{
			Long t224;
			t224=lvt__objectname.get().fLength;
			Bool t225;
			t225=0==t224.get();
			Bool t226;
			t226=g->CompareString(ctx,lvt__objectname.get(),Kframecolor.get())==0;
			if (!( t225.get()||t226.get())) goto _38;
		}
		{
			Bool t229;
			t229=4!=lvl__type__multi.get();
			c.f.fLine=166;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kMcPPBzEYtZk.cv(),t229.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t231;
			t231=4!=lvl__type__multi.get();
			c.f.fLine=167;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),keJsXRPvW4Oo.cv(),t231.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t233;
			t233=4!=lvl__type__multi.get();
			c.f.fLine=168;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kwnm0WY$F_GQ.cv(),t233.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t234;
			t234.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t235;
			t235.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Long t236;
			t236=2+1000;
			Txt t237;
			t237=Kframecolor.get();
			Long t238;
			t238=lvl__area.get();
			c.f.fLine=169;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t234.cv(),t235.cv(),t236.cv(),t238.cv(),t237.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_38:
		{
			Long t239;
			t239=lvt__objectname.get().fLength;
			Bool t240;
			t240=0==t239.get();
			Bool t241;
			t241=g->CompareString(ctx,lvt__objectname.get(),kOwNeHfIfgdk.get())==0;
			if (!( t240.get()||t241.get())) goto _39;
		}
		{
			Ptr t243;
			t243.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t244;
			t244.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Long t245;
			t245=2+2000;
			Txt t246;
			t246=kOwNeHfIfgdk.get();
			Long t247;
			t247=lvl__area.get();
			c.f.fLine=173;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t243.cv(),t244.cv(),t245.cv(),t247.cv(),t246.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_39:
		{
			Long t248;
			t248=lvt__objectname.get().fLength;
			Bool t249;
			t249=0==t248.get();
			Bool t250;
			t250=g->CompareString(ctx,lvt__objectname.get(),kaiyce67OJ4E.get())==0;
			if (!( t249.get()||t250.get())) goto _40;
		}
		{
			Ptr t252;
			t252.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t253;
			t253.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t254;
			t254=kaiyce67OJ4E.get();
			Long t255;
			t255=lvl__area.get();
			Long t256;
			t256=9;
			c.f.fLine=177;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t252.cv(),t253.cv(),t256.cv(),t255.cv(),t254.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_40:
		{
			Long t257;
			t257=lvt__objectname.get().fLength;
			Bool t258;
			t258=0==t257.get();
			Bool t259;
			t259=g->CompareString(ctx,lvt__objectname.get(),Kvz__obj__rounding.get())==0;
			if (!( t258.get()||t259.get())) goto _41;
		}
		{
			Bool t262;
			t262=4!=lvl__type__multi.get();
			c.f.fLine=181;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kP$9AtjjuNts.cv(),t262.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t264;
			t264=4!=lvl__type__multi.get();
			c.f.fLine=182;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kOgjvMpI2t9o.cv(),t264.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t266;
			t266=4!=lvl__type__multi.get();
			c.f.fLine=183;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kvz__obj__rounding.cv(),t266.cv()},3,238)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t267;
			t267.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t268;
			t268.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t269;
			t269=Kvz__obj__rounding.get();
			Long t270;
			t270=lvl__area.get();
			Long t271;
			t271=14;
			c.f.fLine=184;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t267.cv(),t268.cv(),t271.cv(),t270.cv(),t269.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_41:
		{
			Long t272;
			t272=lvt__objectname.get().fLength;
			Bool t273;
			t273=0==t272.get();
			Bool t274;
			t274=g->CompareString(ctx,lvt__objectname.get(),kdEIiV5O$KzQ.get())==0;
			if (!( t273.get()||t274.get())) goto _42;
		}
		{
			Ptr t276;
			t276.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t277;
			t277.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t278;
			t278=kdEIiV5O$KzQ.get();
			Long t279;
			t279=lvl__area.get();
			Long t280;
			t280=6;
			c.f.fLine=188;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t276.cv(),t277.cv(),t280.cv(),t279.cv(),t278.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_42:
		{
			Long t281;
			t281=lvt__objectname.get().fLength;
			Bool t282;
			t282=0==t281.get();
			Bool t283;
			t283=g->CompareString(ctx,lvt__objectname.get(),Kfillcolor.get())==0;
			if (!( t282.get()||t283.get())) goto _43;
		}
		{
			Ptr t285;
			t285.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t286;
			t286.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Long t287;
			t287=1+1000;
			Txt t288;
			t288=Kfillcolor.get();
			Long t289;
			t289=lvl__area.get();
			c.f.fLine=192;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t285.cv(),t286.cv(),t287.cv(),t289.cv(),t288.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_43:
		{
			Long t290;
			t290=lvt__objectname.get().fLength;
			Bool t291;
			t291=0==t290.get();
			Bool t292;
			t292=g->CompareString(ctx,lvt__objectname.get(),kDQ8kkpdHzS0.get())==0;
			if (!( t291.get()||t292.get())) goto _44;
		}
		{
			Ptr t294;
			t294.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t295;
			t295.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Long t296;
			t296=1+2000;
			Txt t297;
			t297=kDQ8kkpdHzS0.get();
			Long t298;
			t298=lvl__area.get();
			c.f.fLine=196;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t294.cv(),t295.cv(),t296.cv(),t298.cv(),t297.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_44:
_36:
		{
			Txt t299;
			t299=Kklapp__text.get();
			Long t300;
			c.f.fLine=204;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t299.cv()},t300.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t301;
			t301=1==t300.get();
			if (!(t301.get())) goto _45;
		}
		{
			Bool t302;
			t302=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t303;
			t303=g->CompareString(ctx,lvt__objectname.get(),Ktt__fontlist.get())==0;
			if (!( t302.get()||t303.get())) goto _46;
		}
		{
			Bool t305;
			t305=lvf__object__text.get();
			c.f.fLine=208;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Ktt__fontlist.cv(),t305.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t306;
			t306.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t307;
			t307.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t308;
			t308=Ktt__fontlist.get();
			Long t309;
			t309=lvl__area.get();
			Long t310;
			t310=8;
			c.f.fLine=209;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t306.cv(),t307.cv(),t310.cv(),t309.cv(),t308.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_46:
		{
			Long t311;
			t311=lvt__objectname.get().fLength;
			Bool t312;
			t312=0==t311.get();
			Bool t313;
			t313=g->CompareString(ctx,lvt__objectname.get(),Ktz__fontsize.get())==0;
			if (!( t312.get()||t313.get())) goto _47;
		}
		{
			Ptr t315;
			c.f.fLine=215;
			if (g->Call(ctx,(PCV[]){t315.cv(),Long(3).cv(),Ktz__fontsize.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t315.get();
		}
		{
			Bool t316;
			c.f.fLine=216;
			if (g->Call(ctx,(PCV[]){t316.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t317;
			t317=t316.get();
			Bool t318;
			t318=!(t317.get());
			if (!(t318.get())) goto _48;
		}
		{
			Long t319;
			t319=14;
			c.f.fLine=218;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object.cv(),t319.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		c.f.fLine=220;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object.cv(),(PCV)-1,Long(0).cv(),nullptr})) goto _0;
		c.f.fLine=221;
		if (!g->SetValue(ctx,(PCV[]){Num(8).cv(),lvp__object.cv(),(PCV)-1,Long(1).cv(),nullptr})) goto _0;
		c.f.fLine=222;
		if (!g->SetValue(ctx,(PCV[]){Num(9).cv(),lvp__object.cv(),(PCV)-1,Long(2).cv(),nullptr})) goto _0;
		c.f.fLine=223;
		if (!g->SetValue(ctx,(PCV[]){Num(10).cv(),lvp__object.cv(),(PCV)-1,Long(3).cv(),nullptr})) goto _0;
		c.f.fLine=224;
		if (!g->SetValue(ctx,(PCV[]){Num(12).cv(),lvp__object.cv(),(PCV)-1,Long(4).cv(),nullptr})) goto _0;
		c.f.fLine=225;
		if (!g->SetValue(ctx,(PCV[]){Num(13).cv(),lvp__object.cv(),(PCV)-1,Long(5).cv(),nullptr})) goto _0;
		c.f.fLine=226;
		if (!g->SetValue(ctx,(PCV[]){Num(14).cv(),lvp__object.cv(),(PCV)-1,Long(6).cv(),nullptr})) goto _0;
		c.f.fLine=227;
		if (!g->SetValue(ctx,(PCV[]){Num(16).cv(),lvp__object.cv(),(PCV)-1,Long(7).cv(),nullptr})) goto _0;
		c.f.fLine=228;
		if (!g->SetValue(ctx,(PCV[]){Num(18).cv(),lvp__object.cv(),(PCV)-1,Long(8).cv(),nullptr})) goto _0;
		c.f.fLine=229;
		if (!g->SetValue(ctx,(PCV[]){Num(20).cv(),lvp__object.cv(),(PCV)-1,Long(9).cv(),nullptr})) goto _0;
		c.f.fLine=230;
		if (!g->SetValue(ctx,(PCV[]){Num(22).cv(),lvp__object.cv(),(PCV)-1,Long(10).cv(),nullptr})) goto _0;
		c.f.fLine=231;
		if (!g->SetValue(ctx,(PCV[]){Num(26).cv(),lvp__object.cv(),(PCV)-1,Long(11).cv(),nullptr})) goto _0;
		c.f.fLine=232;
		if (!g->SetValue(ctx,(PCV[]){Num(32).cv(),lvp__object.cv(),(PCV)-1,Long(12).cv(),nullptr})) goto _0;
		c.f.fLine=233;
		if (!g->SetValue(ctx,(PCV[]){Num(48).cv(),lvp__object.cv(),(PCV)-1,Long(13).cv(),nullptr})) goto _0;
		c.f.fLine=234;
		if (!g->SetValue(ctx,(PCV[]){Num(72).cv(),lvp__object.cv(),(PCV)-1,Long(14).cv(),nullptr})) goto _0;
_48:
		{
			Bool t320;
			t320=lvf__object__text.get();
			c.f.fLine=238;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Ktz__fontsize.cv(),t320.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t321;
			t321.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t322;
			t322.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t323;
			t323=Ktz__fontsize.get();
			Long t324;
			t324=lvl__area.get();
			Long t325;
			t325=15;
			c.f.fLine=239;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t321.cv(),t322.cv(),t325.cv(),t324.cv(),t323.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_47:
		{
			Long t326;
			t326=lvt__objectname.get().fLength;
			Bool t327;
			t327=0==t326.get();
			Bool t328;
			t328=g->CompareString(ctx,lvt__objectname.get(),Ktt__alignment.get())==0;
			if (!( t327.get()||t328.get())) goto _49;
		}
		{
			Ptr t330;
			c.f.fLine=245;
			if (g->Call(ctx,(PCV[]){t330.cv(),Long(3).cv(),Ktt__alignment.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t330.get();
		}
		{
			Bool t331;
			c.f.fLine=247;
			if (g->Call(ctx,(PCV[]){t331.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t332;
			t332=t331.get();
			Bool t333;
			t333=!(t332.get());
			if (!(t333.get())) goto _50;
		}
		{
			Long t334;
			t334=4;
			c.f.fLine=249;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object.cv(),t334.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t335;
			c.f.fLine=251;
			if (g->Call(ctx,(PCV[]){t335.cv(),Kstandard.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t335.cv(),lvp__object.cv(),(PCV)-1,Long(1).cv(),nullptr})) goto _0;
		}
		{
			Txt t336;
			c.f.fLine=252;
			if (g->Call(ctx,(PCV[]){t336.cv(),Klinks.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t336.cv(),lvp__object.cv(),(PCV)-1,Long(2).cv(),nullptr})) goto _0;
		}
		{
			Txt t337;
			c.f.fLine=253;
			if (g->Call(ctx,(PCV[]){t337.cv(),Kzentriert.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t337.cv(),lvp__object.cv(),(PCV)-1,Long(3).cv(),nullptr})) goto _0;
		}
		{
			Txt t338;
			c.f.fLine=254;
			if (g->Call(ctx,(PCV[]){t338.cv(),Krechts.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t338.cv(),lvp__object.cv(),(PCV)-1,Long(4).cv(),nullptr})) goto _0;
		}
_50:
		{
			Bool t339;
			t339=lvf__object__text.get();
			c.f.fLine=258;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Ktt__alignment.cv(),t339.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t340;
			t340.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t341;
			t341.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t342;
			t342=Ktt__alignment.get();
			Long t343;
			t343=lvl__area.get();
			Long t344;
			t344=21;
			c.f.fLine=259;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t340.cv(),t341.cv(),t344.cv(),t343.cv(),t342.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_49:
		{
			Bool t345;
			t345=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t346;
			t346=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__fett.get())==0;
			if (!( t345.get()||t346.get())) goto _51;
		}
		{
			Bool t348;
			t348=lvf__object__text.get();
			c.f.fLine=264;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kvl__obj__fett.cv(),t348.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t349;
			t349.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t350;
			t350.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t351;
			t351=Kvl__obj__fett.get();
			Long t352;
			t352=lvl__area.get();
			Long t353;
			t353=16;
			c.f.fLine=265;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t349.cv(),t350.cv(),t353.cv(),t352.cv(),t351.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_51:
		{
			Bool t354;
			t354=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t355;
			t355=g->CompareString(ctx,lvt__objectname.get(),Kvl__obj__kursiv.get())==0;
			if (!( t354.get()||t355.get())) goto _52;
		}
		{
			Bool t357;
			t357=lvf__object__text.get();
			c.f.fLine=269;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kvl__obj__kursiv.cv(),t357.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t358;
			t358.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t359;
			t359.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t360;
			t360=Kvl__obj__kursiv.get();
			Long t361;
			t361=lvl__area.get();
			Long t362;
			t362=16;
			c.f.fLine=270;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t358.cv(),t359.cv(),t362.cv(),t361.cv(),t360.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_52:
		{
			Bool t363;
			t363=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t364;
			t364=g->CompareString(ctx,lvt__objectname.get(),kFhai9F_sNOY.get())==0;
			if (!( t363.get()||t364.get())) goto _53;
		}
		{
			Bool t366;
			t366=lvf__object__text.get();
			c.f.fLine=274;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kFhai9F_sNOY.cv(),t366.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t367;
			t367.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t368;
			t368.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t369;
			t369=kFhai9F_sNOY.get();
			Long t370;
			t370=lvl__area.get();
			Long t371;
			t371=16;
			c.f.fLine=275;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t367.cv(),t368.cv(),t371.cv(),t370.cv(),t369.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_53:
		{
			Bool t372;
			t372=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t373;
			t373=g->CompareString(ctx,lvt__objectname.get(),kU2zkgE906Dw.get())==0;
			if (!( t372.get()||t373.get())) goto _54;
		}
		{
			Bool t375;
			t375=lvf__object__text.get();
			c.f.fLine=279;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kU2zkgE906Dw.cv(),t375.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t376;
			t376.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t377;
			t377.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t378;
			t378=kU2zkgE906Dw.get();
			Long t379;
			t379=lvl__area.get();
			Long t380;
			t380=16;
			c.f.fLine=280;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t376.cv(),t377.cv(),t380.cv(),t379.cv(),t378.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_54:
		{
			Bool t381;
			t381=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t382;
			t382=g->CompareString(ctx,lvt__objectname.get(),Ktextcolor.get())==0;
			if (!( t381.get()||t382.get())) goto _55;
		}
		{
			Bool t384;
			t384=lvf__object__text.get();
			c.f.fLine=284;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kia$iPDsWsfo.cv(),t384.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t385;
			t385=lvf__object__text.get();
			c.f.fLine=285;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Ktextcolor__popup.cv(),t385.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t386;
			t386=lvf__object__text.get();
			c.f.fLine=286;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Ktextcolor__multi.cv(),t386.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t387;
			t387.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t388;
			t388.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Long t389;
			t389=3+1000;
			Txt t390;
			t390=Ktextcolor.get();
			Long t391;
			t391=lvl__area.get();
			c.f.fLine=287;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t387.cv(),t388.cv(),t389.cv(),t391.cv(),t390.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_55:
		{
			Bool t392;
			t392=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t393;
			t393=g->CompareString(ctx,lvt__objectname.get(),kBRxf_aO5uPM.get())==0;
			if (!( t392.get()||t393.get())) goto _56;
		}
		{
			Bool t395;
			t395=lvf__object__text.get();
			c.f.fLine=291;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kBRxf_aO5uPM.cv(),t395.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t396;
			t396=lvf__object__text.get();
			c.f.fLine=292;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),krWW$2pCfgsM.cv(),t396.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t397;
			t397.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t398;
			t398.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Long t399;
			t399=3+2000;
			Txt t400;
			t400=kBRxf_aO5uPM.get();
			Long t401;
			t401=lvl__area.get();
			c.f.fLine=293;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t397.cv(),t398.cv(),t399.cv(),t401.cv(),t400.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_56:
		{
			Bool t402;
			t402=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t403;
			t403=g->CompareString(ctx,lvt__objectname.get(),kLZOrm$ZkhuQ.get())==0;
			if (!( t402.get()||t403.get())) goto _57;
		}
		{
			Bool t405;
			t405=lvf__object__text.get();
			c.f.fLine=297;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kLZOrm$ZkhuQ.cv(),t405.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t406;
			t406.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t407;
			t407.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t408;
			t408=kLZOrm$ZkhuQ.get();
			Long t409;
			t409=lvl__area.get();
			Long t410;
			t410=18;
			c.f.fLine=298;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t406.cv(),t407.cv(),t410.cv(),t409.cv(),t408.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_57:
		{
			Bool t411;
			t411=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t412;
			t412=g->CompareString(ctx,lvt__objectname.get(),Ktt__barcode.get())==0;
			if (!( t411.get()||t412.get())) goto _58;
		}
		{
			Bool t414;
			t414=lvf__object__text.get();
			c.f.fLine=303;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Ktt__barcode.cv(),t414.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t415;
			t415.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t416;
			t416.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t417;
			t417=Ktt__barcode.get();
			Long t418;
			t418=lvl__area.get();
			Long t419;
			t419=68;
			c.f.fLine=304;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t415.cv(),t416.cv(),t419.cv(),t418.cv(),t417.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_58:
		{
			Bool t420;
			t420=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t421;
			t421=g->CompareString(ctx,lvt__objectname.get(),kEcgutsDrN6E.get())==0;
			if (!( t420.get()||t421.get())) goto _59;
		}
		{
			Bool t423;
			t423=lvf__object__text.get();
			c.f.fLine=309;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kEcgutsDrN6E.cv(),t423.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t424;
			t424=lvf__object__text.get();
			c.f.fLine=310;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kdUWci5DLwjU.cv(),t424.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t425;
			t425.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t426;
			t426.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t427;
			t427=kEcgutsDrN6E.get();
			Long t428;
			t428=lvl__area.get();
			Long t429;
			t429=83;
			c.f.fLine=311;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t425.cv(),t426.cv(),t429.cv(),t428.cv(),t427.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_59:
_45:
		{
			Txt t430;
			t430=krCNK3qtOezs.get();
			Long t431;
			c.f.fLine=319;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t430.cv()},t431.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t432;
			t432=1==t431.get();
			if (!(t432.get())) goto _60;
		}
		{
			Bool t433;
			t433=g->CompareString(ctx,lvt__objectname.get(),K.get())==0;
			Bool t434;
			t434=g->CompareString(ctx,lvt__objectname.get(),kOE66JInM1Vw.get())==0;
			if (!( t433.get()||t434.get())) goto _61;
		}
		{
			Long t436;
			t436=lvl__area.get();
			Txt t437;
			c.f.fLine=323;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,10).cv(),t437.cv(),t436.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvt__current__report=t437.get();
		}
		{
			Ref t438;
			t438.setLocalRef(ctx,ltt__reports__name.cv());
			c.f.fLine=325;
			if (g->Call(ctx,(PCV[]){nullptr,t438.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t439;
			t439.setLocalRef(ctx,ltt__reports__uuid.cv());
			c.f.fLine=326;
			if (g->Call(ctx,(PCV[]){nullptr,t439.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Long t440;
			t440=lvl__area.get();
			c.f.fLine=328;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,121).cv(),nullptr,t440.cv(),lvl__area.cv(),(CV*)9,ltt__reports__uuid.cv(),nullptr,(CV*)65543},2)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t441;
			t441.setLocalRef(ctx,ltt__reports__uuid.cv());
			Long t442;
			c.f.fLine=330;
			if (g->Call(ctx,(PCV[]){t442.cv(),t441.cv(),lvt__current__report.cv()},2,230)) goto _0;
			lvl__pos=t442.get();
		}
		if (0>=lvl__pos.get()) goto _62;
		{
			Long t444;
			t444=lvl__area.get();
			Long t445;
			c.f.fLine=333;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t445.cv(),t444.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__anz__pages=t445.get();
		}
		{
			Bool t446;
			t446=false;
			lvf__publish=t446.get();
		}
		li=1;
		v6=lvl__anz__pages.get();
		goto _63;
_64:
		{
			Long t447;
			t447=7;
			Long t448;
			t448=li.get();
			Long t449;
			t449=lvl__area.get();
			Long t450;
			c.f.fLine=339;
			proc_INTERN__GETPAGEPROPERTYLONG(glob,ctx,3,3,(PCV[]){t449.cv(),t448.cv(),t447.cv()},t450.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (1!=t450.get()) goto _65;
		}
		{
			Bool t452;
			t452=true;
			lvf__publish=t452.get();
		}
_65:
		li=li.get()+1;
_63:
		if (li.get()<=v6.get()) goto _64;
		{
			Bool t455;
			t455=lvf__publish.get();
			Bool t456;
			t456=!(t455.get());
			if (!(t456.get())) goto _66;
		}
		{
			Ref t457;
			t457.setLocalRef(ctx,ltt__reports__uuid.cv());
			c.f.fLine=346;
			if (g->Call(ctx,(PCV[]){nullptr,t457.cv(),lvl__pos.cv()},2,228)) goto _0;
		}
_66:
_62:
		{
			Ref t458;
			t458.setLocalRef(ctx,ltt__reports__uuid.cv());
			Long t459;
			c.f.fLine=351;
			if (g->Call(ctx,(PCV[]){t459.cv(),t458.cv()},1,274)) goto _0;
			lvl__size=t459.get();
		}
		if (0>=lvl__size.get()) goto _67;
		{
			Ptr t461;
			t461.adopt(g->CreatePointerLocal(ctx,ltt__reports__name.cv(),-1,-1));
			Long t462;
			t462=lvl__size.get();
			c.f.fLine=355;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t461.cv(),t462.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		li=1;
		v8=lvl__size.get();
		goto _68;
_69:
		{
			Txt t463;
			t463=ltt__reports__uuid.arrayElem(li.get()).get();
			Txt t464;
			t464=t463.get();
			Long t465;
			t465=lvl__area.get();
			c.f.fLine=359;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,15).cv(),nullptr,t465.cv(),lvl__area.cv(),(CV*)9,t464.cv(),nullptr,(CV*)33},2)) goto _0;
			g->Check(ctx);
		}
		{
			Long t466;
			t466=2;
			Long t467;
			t467=lvl__area.get();
			Txt t468;
			c.f.fLine=361;
			proc_PARSE__GETREPORTPROPERTYTEXT(glob,ctx,2,2,(PCV[]){t467.cv(),t466.cv()},t468.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t469;
			t469=t468.get();
			ltt__reports__name.arrayElem(li.get())=t469.get();
		}
		li=li.get()+1;
_68:
		if (li.get()<=v8.get()) goto _69;
		{
			Txt t472;
			t472=lvt__current__report.get();
			Long t473;
			t473=lvl__area.get();
			c.f.fLine=365;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,15).cv(),nullptr,t473.cv(),lvl__area.cv(),(CV*)9,t472.cv(),lvt__current__report.cv(),(CV*)33},2)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t474;
			t474.setLocalRef(ctx,ltt__reports__uuid.cv());
			c.f.fLine=367;
			if (g->Call(ctx,(PCV[]){nullptr,t474.cv(),Long(1).cv(),Long(2).cv()},3,227)) goto _0;
		}
		{
			Ref t475;
			t475.setLocalRef(ctx,ltt__reports__name.cv());
			c.f.fLine=368;
			if (g->Call(ctx,(PCV[]){nullptr,t475.cv(),Long(1).cv(),Long(2).cv()},3,227)) goto _0;
		}
		{
			Txt t476;
			c.f.fLine=370;
			if (g->Call(ctx,(PCV[]){t476.cv(),KKeine.cv()},1,991)) goto _0;
			g->Check(ctx);
			Txt t477;
			t477=t476.get();
			ltt__reports__name.arrayElem(1)=t477.get();
		}
		{
			Txt t478;
			t478=K_2D.get();
			ltt__reports__name.arrayElem(2)=t478.get();
		}
		goto _70;
_67:
		{
			Ref t479;
			t479.setLocalRef(ctx,ltt__reports__name.cv());
			c.f.fLine=375;
			if (g->Call(ctx,(PCV[]){nullptr,t479.cv(),Long(1).cv()},2,227)) goto _0;
		}
		{
			Ref t480;
			t480.setLocalRef(ctx,ltt__reports__uuid.cv());
			c.f.fLine=376;
			if (g->Call(ctx,(PCV[]){nullptr,t480.cv(),Long(1).cv()},2,227)) goto _0;
		}
		{
			Txt t481;
			c.f.fLine=378;
			if (g->Call(ctx,(PCV[]){t481.cv(),KKeine.cv()},1,991)) goto _0;
			g->Check(ctx);
			Txt t482;
			t482=t481.get();
			ltt__reports__name.arrayElem(1)=t482.get();
		}
_70:
		{
			Ptr t483;
			c.f.fLine=382;
			if (g->Call(ctx,(PCV[]){t483.cv(),Long(3).cv(),kOE66JInM1Vw.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t483.get();
		}
		{
			Ptr t484;
			c.f.fLine=383;
			if (g->Call(ctx,(PCV[]){t484.cv(),Long(3).cv(),kInRSiF$6ZYQ.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t484.get();
		}
		{
			Ptr t485;
			t485.adopt(g->CreatePointerLocal(ctx,ltt__reports__name.cv(),-1,-1));
			Long t486;
			t486=0;
			c.f.fLine=385;
			proc_ARR__COPY(glob,ctx,2,3,(PCV[]){t485.cv(),lvp__object.cv(),t486.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t487;
			t487.adopt(g->CreatePointerLocal(ctx,ltt__reports__uuid.cv(),-1,-1));
			Long t488;
			t488=0;
			c.f.fLine=386;
			proc_ARR__COPY(glob,ctx,2,3,(PCV[]){t487.cv(),lvp__object2.cv(),t488.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		c.f.fLine=388;
		if (!g->SetValue(ctx,(PCV[]){Num(1).cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		{
			Bool t489;
			t489=lvf__object__subreport.get();
			c.f.fLine=390;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kOE66JInM1Vw.cv(),t489.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Ptr t490;
			t490.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t491;
			t491.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t492;
			t492=kOE66JInM1Vw.get();
			Long t493;
			t493=lvl__area.get();
			Long t494;
			t494=71;
			c.f.fLine=391;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t490.cv(),t491.cv(),t494.cv(),t493.cv(),t492.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_61:
		{
			Long t495;
			t495=lvt__objectname.get().fLength;
			Bool t496;
			t496=0==t495.get();
			Bool t497;
			t497=g->CompareString(ctx,lvt__objectname.get(),k8Kva5G2MigM.get())==0;
			if (!( t496.get()||t497.get())) goto _71;
		}
		{
			Long t499;
			t499=lvl__area.get();
			Txt t500;
			c.f.fLine=397;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,10).cv(),t500.cv(),t499.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvt__current__report=t500.get();
		}
		{
			Ptr t501;
			c.f.fLine=399;
			if (g->Call(ctx,(PCV[]){t501.cv(),Long(3).cv(),kOE66JInM1Vw.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t501.get();
		}
		{
			Ptr t502;
			c.f.fLine=400;
			if (g->Call(ctx,(PCV[]){t502.cv(),Long(3).cv(),kInRSiF$6ZYQ.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t502.get();
		}
		{
			Ptr t503;
			c.f.fLine=402;
			if (g->Call(ctx,(PCV[]){t503.cv(),Long(3).cv(),kxJeR8p29qug.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object3=t503.get();
		}
		{
			Ptr t504;
			c.f.fLine=403;
			if (g->Call(ctx,(PCV[]){t504.cv(),Long(3).cv(),k8Kva5G2MigM.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object4=t504.get();
		}
		{
			Long t505;
			c.f.fLine=405;
			if (!g->GetValue(ctx,(PCV[]){t505.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			lvl__pos=t505.get();
		}
		{
			Long t506;
			t506=0;
			c.f.fLine=407;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object3.cv(),t506.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t507;
			t507=0;
			c.f.fLine=408;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object4.cv(),t507.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Variant t508;
			c.f.fLine=410;
			if (!g->GetValue(ctx,(PCV[]){t508.cv(),lvp__object2.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Bool t509;
			if (g->OperationOnAny(ctx,6,t508.cv(),lvt__current__report.cv(),t509.cv())) goto _0;
			if (!(t509.get())) goto _72;
		}
		{
			Long t510;
			t510=lvl__area.get();
			Long t511;
			c.f.fLine=412;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t511.cv(),t510.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__anz__pages=t511.get();
		}
		li=1;
		v10=lvl__anz__pages.get();
		goto _73;
_74:
		{
			Long t512;
			t512=7;
			Long t513;
			t513=li.get();
			Long t514;
			t514=lvl__area.get();
			Long t515;
			c.f.fLine=416;
			proc_INTERN__GETPAGEPROPERTYLONG(glob,ctx,3,3,(PCV[]){t514.cv(),t513.cv(),t512.cv()},t515.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (1!=t515.get()) goto _75;
		}
		{
			Long t517;
			t517=li.get();
			Long t518;
			t518=lvl__area.get();
			Long t519;
			c.f.fLine=418;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,153).cv(),t519.cv(),t518.cv(),lvl__area.cv(),(CV*)9,t517.cv(),li.cv(),(CV*)9},2)) goto _0;
			g->Check(ctx);
			Ref t520;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t520.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t520.cv(),t519.cv()},2,911)) goto _0;
		}
		{
			Txt t521;
			c.f.fLine=419;
			if (g->Call(ctx,(PCV[]){t521.cv(),li.cv()},1,10)) goto _0;
			Ref t522;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t522.cv(),lvp__object4.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t522.cv(),t521.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
_75:
		li=li.get()+1;
_73:
		if (li.get()<=v10.get()) goto _74;
		{
			Bool t525;
			t525=lvf__object__subreport.get();
			c.f.fLine=425;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k8Kva5G2MigM.cv(),t525.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		goto _76;
_72:
		{
			Variant t526;
			c.f.fLine=429;
			if (!g->GetValue(ctx,(PCV[]){t526.cv(),lvp__object2.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t527;
			if (g->Call(ctx,(PCV[]){t527.cv(),t526.cv()},1,16)) goto _0;
			Bool t528;
			t528=0==t527.get();
			if (!(t528.get())) goto _77;
		}
		{
			Ref t529;
			c.f.fLine=431;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t529.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t529.cv(),Long(0).cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t530;
			c.f.fLine=432;
			if (g->Call(ctx,(PCV[]){t530.cv(),Kaktuelle__seite.cv()},1,991)) goto _0;
			g->Check(ctx);
			Ref t531;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t531.cv(),lvp__object4.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t531.cv(),t530.cv()},2,911)) goto _0;
		}
		{
			Bool t532;
			t532=false;
			Bool t533;
			t533=t532.get();
			c.f.fLine=433;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k8Kva5G2MigM.cv(),t533.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		goto _78;
_77:
		{
			Ref t534;
			c.f.fLine=437;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t534.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t534.cv(),Long(0).cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t535;
			c.f.fLine=438;
			if (g->Call(ctx,(PCV[]){t535.cv(),Kaktuelle__seite.cv()},1,991)) goto _0;
			g->Check(ctx);
			Ref t536;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t536.cv(),lvp__object4.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t536.cv(),t535.cv()},2,911)) goto _0;
		}
		{
			Ref t537;
			c.f.fLine=439;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t537.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t537.cv(),Long(0).cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t538;
			c.f.fLine=440;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t538.cv(),lvp__object4.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t538.cv(),K_2D.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t539;
			c.f.fLine=442;
			if (!g->GetValue(ctx,(PCV[]){t539.cv(),lvp__object2.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t540;
			t540=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,15).cv(),nullptr,t540.cv(),lvl__area.cv(),(CV*)9,t539.cv(),nullptr,(CV*)33},2)) goto _0;
			g->Check(ctx);
		}
		{
			Long t541;
			t541=lvl__area.get();
			Long t542;
			c.f.fLine=443;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,117).cv(),t542.cv(),t541.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__anz__pages=t542.get();
		}
		li=1;
		v12=lvl__anz__pages.get();
		goto _79;
_80:
		{
			Long t543;
			t543=li.get();
			Long t544;
			t544=lvl__area.get();
			Long t545;
			c.f.fLine=447;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,153).cv(),t545.cv(),t544.cv(),lvl__area.cv(),(CV*)9,t543.cv(),li.cv(),(CV*)9},2)) goto _0;
			g->Check(ctx);
			Ref t546;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t546.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t546.cv(),t545.cv()},2,911)) goto _0;
		}
		{
			Txt t547;
			c.f.fLine=448;
			if (g->Call(ctx,(PCV[]){t547.cv(),li.cv()},1,10)) goto _0;
			Ref t548;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t548.cv(),lvp__object4.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t548.cv(),t547.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		li=li.get()+1;
_79:
		if (li.get()<=v12.get()) goto _80;
		{
			Txt t551;
			t551=lvt__current__report.get();
			Long t552;
			t552=lvl__area.get();
			c.f.fLine=452;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,15).cv(),nullptr,t552.cv(),lvl__area.cv(),(CV*)9,t551.cv(),lvt__current__report.cv(),(CV*)33},2)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t553;
			t553=lvf__object__subreport.get();
			c.f.fLine=453;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k8Kva5G2MigM.cv(),t553.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
_78:
_76:
		{
			Ptr t554;
			t554.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects.cv(),-1,-1));
			Ptr t555;
			t555.adopt(g->CreatePointerLocal(ctx,ltl__selected__objects__types.cv(),-1,-1));
			Txt t556;
			t556=k8Kva5G2MigM.get();
			Long t557;
			t557=lvl__area.get();
			Long t558;
			t558=73;
			c.f.fLine=459;
			proc_PAL__UPDATE__OBJECT__SETMULTI(glob,ctx,5,5,(PCV[]){t554.cv(),t555.cv(),t558.cv(),t557.cv(),t556.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_71:
_60:
_4:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
