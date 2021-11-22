extern int32_t vvl__hl__referencelist;
extern Txt K;
extern Txt K_24;
extern Txt k$QyJP5kD8a0;
Asm4d_Proc proc_INTERN__GETVSTRUCPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETVSTRUCPROPERTYTEXT;
extern unsigned char D_proc_HMREP__PALETTE__DROP[];
void proc_HMREP__PALETTE__DROP( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_HMREP__PALETTE__DROP);
	if (!ctx->doingAbort) try {
		Value_array_longint ltl__ids;
		Txt lvt__objectname;
		Txt lvt__varname;
		Long lvl__height;
		Long lVL__REF;
		Long lvl__area;
		Long lvl__width;
		Long lvl__fieldNo;
		Num lvz__x;
		Num lvz__y;
		Txt lVT__TEXT;
		Long lvl__caption__offset;
		Long lvl__arrayindex;
		Ptr lvp__destination;
		Long lvl__process;
		Long lvl__tableNo;
		Long lvl__id1;
		Txt lvt__caption;
		Long lvl__id2;
		Long lvl__result;
		Long lvl__type;
		new ( outResult) Long();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__result=0;
		lvl__arrayindex=0;
		lvl__process=0;
		lvz__x=0;
		lvz__y=0;
		{
			Ptr t0;
			t0.adopt(g->CreatePointerLocal(ctx,lvz__x.cv(),-1,-1));
			lvp__destination=t0.get();
		}
		{
			Num t1;
			t1=lvz__y.get();
			Num t2;
			t2=lvz__x.get();
			Long t3;
			t3=lvl__process.get();
			Long t4;
			t4=lvl__arrayindex.get();
			Long t5;
			t5=lvl__area.get();
			c.f.fLine=17;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,154).cv(),nullptr,t5.cv(),lvl__area.cv(),(CV*)9,lvp__destination.cv(),nullptr,(CV*)40,t4.cv(),lvl__arrayindex.cv(),(CV*)9,t3.cv(),lvl__process.cv(),(CV*)9,t2.cv(),lvz__x.cv(),(CV*)65537,t1.cv(),lvz__y.cv(),(CV*)65537},6)) goto _0;
			g->Check(ctx);
		}
		lvl__tableNo=0;
		lvl__fieldNo=0;
		{
			Ref t6;
			t6.setLocalRef(ctx,lvl__fieldNo.cv());
			Ref t7;
			t7.setLocalRef(ctx,lvl__tableNo.cv());
			Ref t8;
			t8.setLocalRef(ctx,lvt__varname.cv());
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){nullptr,lvp__destination.cv(),t8.cv(),t7.cv(),t6.cv()},4,394)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t9;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t9.cv(),lvt__varname.cv(),K_24.cv(),K.cv()},3,233)) goto _0;
			lvt__varname=t9.get();
		}
		{
			Bool t10;
			t10=g->CompareString(ctx,lvt__varname.get(),k$QyJP5kD8a0.get())==0;
			Bool t11;
			t11=0<lvl__arrayindex.get();
			Bool t12;
			t12=t10.get()&&t11.get();
			Long t13;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,322)) goto _0;
			g->Check(ctx);
			Bool t14;
			t14=lvl__process.get()==t13.get();
			if (!( t12.get()&&t14.get())) goto _2;
		}
		lVL__REF=0;
		lVT__TEXT=K.get();
		{
			Ref t16;
			t16.setLocalRef(ctx,lVT__TEXT.cv());
			Ref t17;
			t17.setLocalRef(ctx,lVL__REF.cv());
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__referencelist).cv(),lvl__arrayindex.cv(),t17.cv(),t16.cv()},4,378)) goto _0;
			g->Check(ctx);
		}
		if (0>=lVL__REF.get()) goto _3;
		{
			Long t19;
			t19=1;
			Long t20;
			t20=lVL__REF.get();
			Long t21;
			t21=lvl__area.get();
			Long t22;
			c.f.fLine=33;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t21.cv(),t20.cv(),t19.cv()},t22.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__type=t22.get();
		}
		lvl__width=100;
		lvl__caption__offset=20;
		lvl__height=20;
		{
			Bool t23;
			t23=2==lvl__type.get();
			Bool t24;
			t24=3==lvl__type.get();
			if (!( t23.get()||t24.get())) goto _4;
		}
		{
			Long t26;
			t26=5;
			Long t27;
			t27=lVL__REF.get();
			Long t28;
			t28=lvl__area.get();
			Txt t29;
			c.f.fLine=41;
			proc_INTERN__GETVSTRUCPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t28.cv(),t27.cv(),t26.cv()},t29.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__caption=t29.get();
		}
		{
			Num t30;
			t30=lvl__caption__offset.get();
			Num t31;
			t31=lvz__y.get()-t30.get();
			Num t32;
			t32=lvl__width.get();
			Num t33;
			t33=lvz__x.get()+t32.get();
			Num t34;
			t34=lvl__caption__offset.get();
			Num t35;
			t35=lvz__y.get()-t34.get();
			Num t36;
			t36=lvl__height.get();
			Num t37;
			t37=t35.get()+t36.get();
			Txt t38;
			t38=lvt__caption.get();
			Num t39;
			t39=lvz__x.get();
			Long t40;
			t40=lvl__area.get();
			Long t41;
			c.f.fLine=43;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,9).cv(),t41.cv(),t40.cv(),lvl__area.cv(),(CV*)9,t39.cv(),lvz__x.cv(),(CV*)65537,t31.cv(),nullptr,(CV*)65537,t33.cv(),nullptr,(CV*)65537,t37.cv(),nullptr,(CV*)65537,t38.cv(),lvt__caption.cv(),(CV*)33},6)) goto _0;
			g->Check(ctx);
			lvl__id1=t41.get();
		}
		{
			Txt t42;
			t42=K.get();
			Num t43;
			t43=1;
			Long t44;
			t44=16;
			Long t45;
			t45=lvl__id1.get();
			Long t46;
			t46=lvl__area.get();
			c.f.fLine=44;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,29).cv(),nullptr,t46.cv(),lvl__area.cv(),(CV*)9,t45.cv(),lvl__id1.cv(),(CV*)9,t44.cv(),nullptr,(CV*)9,t43.cv(),nullptr,(CV*)65537,t42.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		{
			Num t47;
			t47=lvl__width.get();
			Num t48;
			t48=lvz__x.get()+t47.get();
			Num t49;
			t49=lvl__height.get();
			Num t50;
			t50=lvz__y.get()+t49.get();
			Txt t51;
			t51=lvt__caption.get();
			Num t52;
			t52=lvz__y.get();
			Num t53;
			t53=lvz__x.get();
			Long t54;
			t54=lvl__area.get();
			Long t55;
			c.f.fLine=46;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,9).cv(),t55.cv(),t54.cv(),lvl__area.cv(),(CV*)9,t53.cv(),lvz__x.cv(),(CV*)65537,t52.cv(),lvz__y.cv(),(CV*)65537,t48.cv(),nullptr,(CV*)65537,t50.cv(),nullptr,(CV*)65537,t51.cv(),lvt__caption.cv(),(CV*)33},6)) goto _0;
			g->Check(ctx);
			lvl__id2=t55.get();
		}
		if (2!=lvl__type.get()) goto _6;
		{
			Long t57;
			t57=2;
			Long t58;
			t58=lVL__REF.get();
			Long t59;
			t59=lvl__area.get();
			Long t60;
			c.f.fLine=51;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t59.cv(),t58.cv(),t57.cv()},t60.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__tableNo=t60.get();
		}
		{
			Long t61;
			t61=3;
			Long t62;
			t62=lVL__REF.get();
			Long t63;
			t63=lvl__area.get();
			Long t64;
			c.f.fLine=52;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t63.cv(),t62.cv(),t61.cv()},t64.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__fieldNo=t64.get();
		}
		{
			Bool t65;
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){t65.cv(),lvl__tableNo.cv()},1,999)) goto _0;
			g->Check(ctx);
			Bool t66;
			if (g->Call(ctx,(PCV[]){t66.cv(),lvl__tableNo.cv(),lvl__fieldNo.cv()},2,1000)) goto _0;
			if (!( t65.get()&&t66.get())) goto _7;
		}
		{
			Txt t68;
			c.f.fLine=55;
			if (g->Call(ctx,(PCV[]){t68.cv(),lvl__tableNo.cv()},1,256)) goto _0;
			g->Check(ctx);
			Txt t69;
			if (g->Call(ctx,(PCV[]){t69.cv(),lvl__tableNo.cv(),lvl__fieldNo.cv()},2,257)) goto _0;
			Long t70;
			t70=0;
			Txt t71;
			t71=K.get();
			Txt t72;
			t72=K.get();
			Long t73;
			t73=1;
			Long t74;
			t74=lvl__id2.get();
			Long t75;
			t75=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,47).cv(),nullptr,t75.cv(),lvl__area.cv(),(CV*)9,t74.cv(),lvl__id2.cv(),(CV*)9,t73.cv(),nullptr,(CV*)9,t72.cv(),nullptr,(CV*)33,t68.cv(),nullptr,(CV*)33,t69.cv(),nullptr,(CV*)33,t71.cv(),nullptr,(CV*)33,t70.cv(),nullptr,(CV*)9},8)) goto _0;
		}
_7:
		goto _5;
_6:
		if (3!=lvl__type.get()) goto _8;
		{
			Long t77;
			t77=4;
			Long t78;
			t78=lVL__REF.get();
			Long t79;
			t79=lvl__area.get();
			Txt t80;
			c.f.fLine=60;
			proc_INTERN__GETVSTRUCPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t79.cv(),t78.cv(),t77.cv()},t80.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__objectname=t80.get();
		}
		{
			Txt t81;
			t81=lvt__objectname.get();
			Long t82;
			c.f.fLine=62;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,89).cv(),t82.cv(),t81.cv(),lvt__objectname.cv(),(CV*)33},1)) goto _0;
			g->Check(ctx);
			lvl__type=t82.get();
		}
		{
			Bool t83;
			t83=13<=lvl__type.get();
			Bool t84;
			t84=22>=lvl__type.get();
			Bool t85;
			t85=t83.get()&&t84.get();
			Bool t86;
			t86=34==lvl__type.get();
			if (!( t85.get()||t86.get())) goto _9;
		}
		{
			Long t88;
			t88=0;
			Txt t89;
			t89=lvt__objectname.get();
			Txt t90;
			t90=K.get();
			Txt t91;
			t91=K.get();
			Txt t92;
			t92=K.get();
			Long t93;
			t93=4;
			Long t94;
			t94=lvl__id2.get();
			Long t95;
			t95=lvl__area.get();
			c.f.fLine=65;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,47).cv(),nullptr,t95.cv(),lvl__area.cv(),(CV*)9,t94.cv(),lvl__id2.cv(),(CV*)9,t93.cv(),nullptr,(CV*)9,t92.cv(),nullptr,(CV*)33,t91.cv(),nullptr,(CV*)33,t90.cv(),nullptr,(CV*)33,t89.cv(),lvt__objectname.cv(),(CV*)33,t88.cv(),nullptr,(CV*)9},8)) goto _0;
			g->Check(ctx);
		}
		goto _10;
_9:
		{
			Long t96;
			t96=0;
			Txt t97;
			t97=lvt__objectname.get();
			Txt t98;
			t98=K.get();
			Txt t99;
			t99=K.get();
			Txt t100;
			t100=K.get();
			Long t101;
			t101=3;
			Long t102;
			t102=lvl__id2.get();
			Long t103;
			t103=lvl__area.get();
			c.f.fLine=67;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,47).cv(),nullptr,t103.cv(),lvl__area.cv(),(CV*)9,t102.cv(),lvl__id2.cv(),(CV*)9,t101.cv(),nullptr,(CV*)9,t100.cv(),nullptr,(CV*)33,t99.cv(),nullptr,(CV*)33,t98.cv(),nullptr,(CV*)33,t97.cv(),lvt__objectname.cv(),(CV*)33,t96.cv(),nullptr,(CV*)9},8)) goto _0;
			g->Check(ctx);
		}
_10:
		goto _5;
_8:
_5:
		{
			Ref t104;
			t104.setLocalRef(ctx,ltl__ids.cv());
			c.f.fLine=72;
			if (g->Call(ctx,(PCV[]){nullptr,t104.cv(),Long(2).cv()},2,221)) goto _0;
		}
		ltl__ids.arrayElem(1)=lvl__id1.get();
		ltl__ids.arrayElem(2)=lvl__id2.get();
		{
			Long t105;
			t105=0;
			Long t106;
			t106=lvl__area.get();
			c.f.fLine=76;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,41).cv(),nullptr,t106.cv(),lvl__area.cv(),(CV*)9,ltl__ids.cv(),nullptr,(CV*)65543,t105.cv(),nullptr,(CV*)9},3)) goto _0;
			g->Check(ctx);
		}
_4:
_3:
_2:
		Res<Long>(outResult)=lvl__result.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
