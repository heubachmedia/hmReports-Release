extern int32_t vvl__hl__referencelist;
extern int32_t vvl__hl__referencelist2;
extern Txt K;
extern Txt KVariablen;
extern Txt Kdatabase;
extern Txt Kvl__current__area;
extern Txt kc2_rJXRatVQ;
Asm4d_Proc proc_ARR__FIND2INARRAY;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_INTERN__GETFIELDPICTURE;
Asm4d_Proc proc_INTERN__GETPICTURE;
Asm4d_Proc proc_INTERN__GETVSTRUCPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETVSTRUCPROPERTYTEXT;
Asm4d_Proc proc_OBJECT__SETLONGINT;
extern unsigned char D_proc_PAL__UPDATE__REFERENCELIST[];
void proc_PAL__UPDATE__REFERENCELIST( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__REFERENCELIST);
	if (!ctx->doingAbort) try {
		Long v0;
		Long lvl__list__with__tables;
		Long v1;
		Long lvl__size;
		Value_array_text ltt__vstructure__caption;
		Value_array_int ltg__vstructure__tableno;
		Long v2;
		Long li;
		Long lvl__reflist__number;
		Value_array_longint ltl__hlist__groupID;
		Long v3;
		Value_array_longint ltl__hlist__group4Dref;
		Value_array_int ltg__vstructure__fieldno;
		Long lvl__pos2;
		Value_array_longint ltl__vstructure;
		Long lvl__list__with__fields;
		Long lvl__area;
		Value_array_longint ltl__vstructure__groupdID;
		Value_array_text ltt__vstructure__variable;
		Long lvl__list__with__variables;
		Long lvl__reflist;
		Value_array_int ltg__vstructure__type;
		Long lvl__pos;
		Long lvl__listgroup;
		Pic lvb__icon;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__reflist__number=Parm<Long>(inParams,inNbParam,2).get();
		{
			Long t0;
			t0=lvl__area.get();
			Txt t1;
			t1=Kvl__current__area.get();
			c.f.fLine=9;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		if (1!=lvl__reflist__number.get()) goto _2;
		{
			Bool t3;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t3.cv(),Var<Long>(ctx,vvl__hl__referencelist).cv()},1,621)) goto _0;
			g->Check(ctx);
			if (!(t3.get())) goto _3;
		}
		c.f.fLine=14;
		if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__referencelist).cv(),Ref((optyp)3).cv()},2,377)) goto _0;
		g->Check(ctx);
_3:
		{
			Long t4;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,375)) goto _0;
			g->Check(ctx);
			Var<Long>(ctx,vvl__hl__referencelist)=t4.get();
			Touch(ctx,vvl__hl__referencelist);
		}
		lvl__reflist=Var<Long>(ctx,vvl__hl__referencelist).get();
		goto _4;
_2:
		{
			Bool t5;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t5.cv(),Var<Long>(ctx,vvl__hl__referencelist2).cv()},1,621)) goto _0;
			g->Check(ctx);
			if (!(t5.get())) goto _5;
		}
		c.f.fLine=23;
		if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__referencelist2).cv(),Ref((optyp)3).cv()},2,377)) goto _0;
		g->Check(ctx);
_5:
		{
			Long t6;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,375)) goto _0;
			g->Check(ctx);
			Var<Long>(ctx,vvl__hl__referencelist2)=t6.get();
			Touch(ctx,vvl__hl__referencelist2);
		}
		lvl__reflist=Var<Long>(ctx,vvl__hl__referencelist2).get();
_4:
		{
			Ref t7;
			t7.setLocalRef(ctx,ltl__vstructure.cv());
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){nullptr,t7.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t8;
			t8.setLocalRef(ctx,ltg__vstructure__type.cv());
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){nullptr,t8.cv(),Long(0).cv()},2,220)) goto _0;
		}
		{
			Ref t9;
			t9.setLocalRef(ctx,ltg__vstructure__tableno.cv());
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){nullptr,t9.cv(),Long(0).cv()},2,220)) goto _0;
		}
		{
			Ref t10;
			t10.setLocalRef(ctx,ltg__vstructure__fieldno.cv());
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){nullptr,t10.cv(),Long(0).cv()},2,220)) goto _0;
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,ltt__vstructure__variable.cv());
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){nullptr,t11.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t12;
			t12.setLocalRef(ctx,ltt__vstructure__caption.cv());
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){nullptr,t12.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t13;
			t13.setLocalRef(ctx,ltl__vstructure__groupdID.cv());
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){nullptr,t13.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Long t14;
			t14=lvl__area.get();
			c.f.fLine=39;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,168).cv(),nullptr,t14.cv(),lvl__area.cv(),(CV*)9,ltl__vstructure.cv(),nullptr,(CV*)65543},2)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t15;
			t15.setLocalRef(ctx,ltl__vstructure.cv());
			Long t16;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t16.cv(),t15.cv()},1,274)) goto _0;
			lvl__size=t16.get();
		}
		{
			Ptr t17;
			t17.adopt(g->CreatePointerLocal(ctx,ltg__vstructure__type.cv(),-1,-1));
			Long t18;
			t18=lvl__size.get();
			c.f.fLine=43;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t17.cv(),t18.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t19;
			t19.adopt(g->CreatePointerLocal(ctx,ltg__vstructure__tableno.cv(),-1,-1));
			Long t20;
			t20=lvl__size.get();
			c.f.fLine=44;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t19.cv(),t20.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t21;
			t21.adopt(g->CreatePointerLocal(ctx,ltg__vstructure__fieldno.cv(),-1,-1));
			Long t22;
			t22=lvl__size.get();
			c.f.fLine=45;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t21.cv(),t22.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t23;
			t23.adopt(g->CreatePointerLocal(ctx,ltt__vstructure__variable.cv(),-1,-1));
			Long t24;
			t24=lvl__size.get();
			c.f.fLine=46;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t23.cv(),t24.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t25;
			t25.adopt(g->CreatePointerLocal(ctx,ltt__vstructure__caption.cv(),-1,-1));
			Long t26;
			t26=lvl__size.get();
			c.f.fLine=47;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t25.cv(),t26.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t27;
			t27.adopt(g->CreatePointerLocal(ctx,ltl__vstructure__groupdID.cv(),-1,-1));
			Long t28;
			t28=lvl__size.get();
			c.f.fLine=48;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t27.cv(),t28.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		li=1;
		v0=lvl__size.get();
		goto _6;
_7:
		{
			Long t29;
			t29=1;
			Long t30;
			t30=ltl__vstructure.arrayElem(li.get()).get();
			Long t31;
			t31=lvl__area.get();
			Long t32;
			c.f.fLine=52;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t31.cv(),t30.cv(),t29.cv()},t32.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltg__vstructure__type.arrayElem(li.get())=t32.get();
		}
		{
			Long t33;
			t33=5;
			Long t34;
			t34=ltl__vstructure.arrayElem(li.get()).get();
			Long t35;
			t35=lvl__area.get();
			Txt t36;
			c.f.fLine=53;
			proc_INTERN__GETVSTRUCPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t35.cv(),t34.cv(),t33.cv()},t36.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t37;
			t37=t36.get();
			ltt__vstructure__caption.arrayElem(li.get())=t37.get();
		}
		{
			Long t38;
			t38=8;
			Long t39;
			t39=ltl__vstructure.arrayElem(li.get()).get();
			Long t40;
			t40=lvl__area.get();
			Long t41;
			c.f.fLine=54;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t40.cv(),t39.cv(),t38.cv()},t41.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltl__vstructure__groupdID.arrayElem(li.get())=t41.get();
		}
		{
			Bool t42;
			t42=1==ltg__vstructure__type.arrayElem(li.get()).get();
			Bool t43;
			t43=2==ltg__vstructure__type.arrayElem(li.get()).get();
			if (!( t42.get()||t43.get())) goto _9;
		}
		{
			Long t45;
			t45=2;
			Long t46;
			t46=ltl__vstructure.arrayElem(li.get()).get();
			Long t47;
			t47=lvl__area.get();
			Long t48;
			c.f.fLine=59;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t47.cv(),t46.cv(),t45.cv()},t48.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltg__vstructure__tableno.arrayElem(li.get())=t48.get();
		}
		{
			Long t49;
			t49=3;
			Long t50;
			t50=ltl__vstructure.arrayElem(li.get()).get();
			Long t51;
			t51=lvl__area.get();
			Long t52;
			c.f.fLine=60;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t51.cv(),t50.cv(),t49.cv()},t52.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltg__vstructure__fieldno.arrayElem(li.get())=t52.get();
		}
		goto _8;
_9:
		if (3!=ltg__vstructure__type.arrayElem(li.get()).get()) goto _10;
		{
			Long t54;
			t54=4;
			Long t55;
			t55=ltl__vstructure.arrayElem(li.get()).get();
			Long t56;
			t56=lvl__area.get();
			Txt t57;
			c.f.fLine=64;
			proc_INTERN__GETVSTRUCPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t56.cv(),t55.cv(),t54.cv()},t57.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t58;
			t58=t57.get();
			ltt__vstructure__variable.arrayElem(li.get())=t58.get();
		}
		goto _8;
_10:
		if (4!=ltg__vstructure__type.arrayElem(li.get()).get()) goto _11;
		goto _8;
_11:
_8:
		li=li.get()+1;
_6:
		if (li.get()<=v0.get()) goto _7;
		li=lvl__size.get();
		v2=1;
		goto _12;
_13:
		{
			Long t62;
			t62=7;
			Long t63;
			t63=ltl__vstructure.arrayElem(li.get()).get();
			Long t64;
			t64=lvl__area.get();
			Long t65;
			c.f.fLine=75;
			proc_INTERN__GETVSTRUCPROPERTYLONG(glob,ctx,3,3,(PCV[]){t64.cv(),t63.cv(),t62.cv()},t65.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (0!=t65.get()) goto _14;
		}
		{
			Ref t67;
			t67.setLocalRef(ctx,ltl__vstructure.cv());
			c.f.fLine=77;
			if (g->Call(ctx,(PCV[]){nullptr,t67.cv(),li.cv()},2,228)) goto _0;
		}
		{
			Ref t68;
			t68.setLocalRef(ctx,ltg__vstructure__type.cv());
			c.f.fLine=78;
			if (g->Call(ctx,(PCV[]){nullptr,t68.cv(),li.cv()},2,228)) goto _0;
		}
		{
			Ref t69;
			t69.setLocalRef(ctx,ltg__vstructure__tableno.cv());
			c.f.fLine=79;
			if (g->Call(ctx,(PCV[]){nullptr,t69.cv(),li.cv()},2,228)) goto _0;
		}
		{
			Ref t70;
			t70.setLocalRef(ctx,ltg__vstructure__fieldno.cv());
			c.f.fLine=80;
			if (g->Call(ctx,(PCV[]){nullptr,t70.cv(),li.cv()},2,228)) goto _0;
		}
		{
			Ref t71;
			t71.setLocalRef(ctx,ltt__vstructure__variable.cv());
			c.f.fLine=81;
			if (g->Call(ctx,(PCV[]){nullptr,t71.cv(),li.cv()},2,228)) goto _0;
		}
		{
			Ref t72;
			t72.setLocalRef(ctx,ltt__vstructure__caption.cv());
			c.f.fLine=82;
			if (g->Call(ctx,(PCV[]){nullptr,t72.cv(),li.cv()},2,228)) goto _0;
		}
		{
			Ref t73;
			t73.setLocalRef(ctx,ltl__vstructure__groupdID.cv());
			c.f.fLine=83;
			if (g->Call(ctx,(PCV[]){nullptr,t73.cv(),li.cv()},2,228)) goto _0;
		}
_14:
		li=li.get()+-1;
_12:
		if (li.get()>=v2.get()) goto _13;
		lvl__list__with__tables=0;
		{
			Ref t76;
			t76.setLocalRef(ctx,ltl__hlist__groupID.cv());
			c.f.fLine=93;
			if (g->Call(ctx,(PCV[]){nullptr,t76.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t77;
			t77.setLocalRef(ctx,ltl__hlist__group4Dref.cv());
			c.f.fLine=94;
			if (g->Call(ctx,(PCV[]){nullptr,t77.cv(),Long(0).cv()},2,221)) goto _0;
		}
		lvl__pos=0;
_15:
		{
			Long t78;
			t78=lvl__pos.get()+1;
			Ref t79;
			t79.setLocalRef(ctx,ltg__vstructure__type.cv());
			Long t80;
			c.f.fLine=100;
			if (g->Call(ctx,(PCV[]){t80.cv(),t79.cv(),Long(1).cv(),t78.cv()},3,230)) goto _0;
			lvl__pos=t80.get();
		}
		if (0>=lvl__pos.get()) goto _16;
		if (0>=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get()) goto _17;
		{
			Long t83;
			t83=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get();
			Ref t84;
			t84.setLocalRef(ctx,ltl__hlist__groupID.cv());
			Long t85;
			c.f.fLine=106;
			if (g->Call(ctx,(PCV[]){t85.cv(),t84.cv(),t83.cv()},2,230)) goto _0;
			if (-1!=t85.get()) goto _18;
		}
		{
			Long t87;
			t87=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get();
			Ref t88;
			t88.setLocalRef(ctx,ltl__vstructure.cv());
			Long t89;
			c.f.fLine=108;
			if (g->Call(ctx,(PCV[]){t89.cv(),t88.cv(),t87.cv()},2,230)) goto _0;
			lvl__pos2=t89.get();
		}
		if (0>=lvl__pos2.get()) goto _19;
		{
			Long t91;
			c.f.fLine=112;
			if (g->Call(ctx,(PCV[]){t91.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__listgroup=t91.get();
		}
		{
			Long t92;
			t92=ltl__vstructure.arrayElem(lvl__pos2.get()).get();
			Ref t93;
			t93.setLocalRef(ctx,ltl__hlist__groupID.cv());
			c.f.fLine=114;
			if (g->Call(ctx,(PCV[]){nullptr,t93.cv(),t92.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t94;
			t94.setLocalRef(ctx,ltl__hlist__group4Dref.cv());
			c.f.fLine=115;
			if (g->Call(ctx,(PCV[]){nullptr,t94.cv(),lvl__listgroup.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		if (0!=lvl__list__with__tables.get()) goto _20;
		{
			Long t96;
			c.f.fLine=119;
			if (g->Call(ctx,(PCV[]){t96.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__list__with__tables=t96.get();
		}
_20:
		{
			Bool t97;
			t97=true;
			Bool t98;
			t98=t97.get();
			Long t99;
			t99=ltl__vstructure.arrayElem(lvl__pos2.get()).get();
			Txt t100;
			t100=ltt__vstructure__caption.arrayElem(lvl__pos2.get()).get();
			Txt t101;
			t101=t100.get();
			c.f.fLine=123;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__list__with__tables.cv(),t101.cv(),t99.cv(),lvl__listgroup.cv(),t98.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
_19:
_18:
_17:
_16:
		if (-1!=lvl__pos.get()) goto _15;
		lvl__pos=0;
_21:
		{
			Long t103;
			t103=lvl__pos.get()+1;
			Ref t104;
			t104.setLocalRef(ctx,ltg__vstructure__type.cv());
			Long t105;
			c.f.fLine=142;
			if (g->Call(ctx,(PCV[]){t105.cv(),t104.cv(),Long(1).cv(),t103.cv()},3,230)) goto _0;
			lvl__pos=t105.get();
		}
		if (0>=lvl__pos.get()) goto _22;
		{
			Txt t107;
			t107=ltt__vstructure__caption.arrayElem(lvl__pos.get()).get();
			Txt t108;
			t108=t107.get();
			Long t109;
			t109=t108.get().fLength;
			Bool t110;
			t110=0<t109.get();
			if (!(t110.get())) goto _23;
		}
		lvl__list__with__fields=0;
		lvl__pos2=0;
_24:
		{
			Ptr t111;
			t111.adopt(g->CreatePointerLocal(ctx,ltg__vstructure__type.cv(),-1,-1));
			Ptr t112;
			t112.adopt(g->CreatePointerLocal(ctx,ltg__vstructure__tableno.cv(),-1,-1));
			Long t113;
			t113=lvl__pos2.get()+1;
			Long t114;
			t114=ltg__vstructure__tableno.arrayElem(lvl__pos.get()).get();
			Long t115;
			t115=2;
			Long t116;
			c.f.fLine=154;
			proc_ARR__FIND2INARRAY(glob,ctx,5,5,(PCV[]){t111.cv(),t112.cv(),t115.cv(),t114.cv(),t113.cv()},t116.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__pos2=t116.get();
		}
		if (0>=lvl__pos2.get()) goto _25;
		{
			Txt t119;
			t119=ltt__vstructure__caption.arrayElem(lvl__pos2.get()).get();
			Bool t118;
			t118=g->CompareString(ctx,t119.get(),K.get())!=0;
			if (!(t118.get())) goto _26;
		}
		if (0!=lvl__list__with__fields.get()) goto _27;
		{
			Long t121;
			c.f.fLine=162;
			if (g->Call(ctx,(PCV[]){t121.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__list__with__fields=t121.get();
		}
_27:
		{
			Bool t122;
			t122=true;
			Bool t123;
			t123=t122.get();
			Long t124;
			t124=ltl__vstructure.arrayElem(lvl__pos2.get()).get();
			Txt t125;
			t125=ltt__vstructure__caption.arrayElem(lvl__pos2.get()).get();
			Txt t126;
			t126=t125.get();
			c.f.fLine=166;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__list__with__fields.cv(),t126.cv(),t124.cv(),Long(0).cv(),t123.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
		{
			Long t127;
			t127=ltg__vstructure__fieldno.arrayElem(lvl__pos2.get()).get();
			Long t128;
			t128=ltg__vstructure__tableno.arrayElem(lvl__pos2.get()).get();
			Pic t129;
			c.f.fLine=168;
			proc_INTERN__GETFIELDPICTURE(glob,ctx,2,2,(PCV[]){t128.cv(),t127.cv()},t129.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvb__icon=t129.get();
		}
		{
			Ref t130;
			t130.setLocalRef(ctx,lvb__icon.cv());
			Long t131;
			t131=ltl__vstructure.arrayElem(lvl__pos2.get()).get();
			c.f.fLine=169;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__list__with__fields.cv(),t131.cv(),t130.cv()},3,950)) goto _0;
			g->Check(ctx);
		}
_26:
_25:
		if (-1!=lvl__pos2.get()) goto _24;
		if (0>=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get()) goto _28;
		{
			Long t134;
			t134=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get();
			Ref t135;
			t135.setLocalRef(ctx,ltl__hlist__groupID.cv());
			Long t136;
			c.f.fLine=179;
			if (g->Call(ctx,(PCV[]){t136.cv(),t135.cv(),t134.cv()},2,230)) goto _0;
			lvl__pos2=t136.get();
		}
		if (0>=lvl__pos2.get()) goto _29;
		lvl__listgroup=ltl__hlist__group4Dref.arrayElem(lvl__pos2.get()).get();
		{
			Bool t138;
			t138=true;
			Bool t139;
			t139=t138.get();
			Long t140;
			t140=ltl__vstructure.arrayElem(lvl__pos.get()).get();
			Txt t141;
			t141=ltt__vstructure__caption.arrayElem(lvl__pos.get()).get();
			Txt t142;
			t142=t141.get();
			c.f.fLine=183;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__listgroup.cv(),t142.cv(),t140.cv(),lvl__list__with__fields.cv(),t139.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
_29:
		goto _30;
_28:
		if (0!=lvl__list__with__tables.get()) goto _31;
		{
			Long t144;
			c.f.fLine=190;
			if (g->Call(ctx,(PCV[]){t144.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__list__with__tables=t144.get();
		}
_31:
		{
			Bool t145;
			t145=true;
			Bool t146;
			t146=t145.get();
			Long t147;
			t147=ltl__vstructure.arrayElem(lvl__pos.get()).get();
			Txt t148;
			t148=ltt__vstructure__caption.arrayElem(lvl__pos.get()).get();
			Txt t149;
			t149=t148.get();
			c.f.fLine=194;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__list__with__tables.cv(),t149.cv(),t147.cv(),lvl__list__with__fields.cv(),t146.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
_30:
_23:
_22:
		if (-1!=lvl__pos.get()) goto _21;
		{
			Txt t151;
			c.f.fLine=204;
			if (g->Call(ctx,(PCV[]){t151.cv(),kc2_rJXRatVQ.cv()},1,991)) goto _0;
			g->Check(ctx);
			Bool t152;
			t152=true;
			Bool t153;
			t153=t152.get();
			if (g->Call(ctx,(PCV[]){nullptr,lvl__reflist.cv(),t151.cv(),Long(-1).cv(),lvl__list__with__tables.cv(),t153.cv()},5,376)) goto _0;
		}
		{
			Txt t154;
			t154=Kdatabase.get();
			Pic t155;
			c.f.fLine=206;
			proc_INTERN__GETPICTURE(glob,ctx,1,1,(PCV[]){t154.cv()},t155.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvb__icon=t155.get();
		}
		{
			Ref t156;
			t156.setLocalRef(ctx,lvb__icon.cv());
			c.f.fLine=207;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__reflist.cv(),Long(-1).cv(),t156.cv()},3,950)) goto _0;
			g->Check(ctx);
		}
		lvl__list__with__variables=0;
		{
			Ref t157;
			t157.setLocalRef(ctx,ltl__hlist__groupID.cv());
			c.f.fLine=213;
			if (g->Call(ctx,(PCV[]){nullptr,t157.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t158;
			t158.setLocalRef(ctx,ltl__hlist__group4Dref.cv());
			c.f.fLine=214;
			if (g->Call(ctx,(PCV[]){nullptr,t158.cv(),Long(0).cv()},2,221)) goto _0;
		}
		lvl__pos=0;
_32:
		{
			Long t159;
			t159=lvl__pos.get()+1;
			Ref t160;
			t160.setLocalRef(ctx,ltg__vstructure__type.cv());
			Long t161;
			c.f.fLine=220;
			if (g->Call(ctx,(PCV[]){t161.cv(),t160.cv(),Long(3).cv(),t159.cv()},3,230)) goto _0;
			lvl__pos=t161.get();
		}
		if (0>=lvl__pos.get()) goto _33;
		if (0>=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get()) goto _34;
		{
			Long t164;
			t164=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get();
			Ref t165;
			t165.setLocalRef(ctx,ltl__hlist__groupID.cv());
			Long t166;
			c.f.fLine=226;
			if (g->Call(ctx,(PCV[]){t166.cv(),t165.cv(),t164.cv()},2,230)) goto _0;
			if (-1!=t166.get()) goto _35;
		}
		{
			Long t168;
			t168=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get();
			Ref t169;
			t169.setLocalRef(ctx,ltl__vstructure.cv());
			Long t170;
			c.f.fLine=228;
			if (g->Call(ctx,(PCV[]){t170.cv(),t169.cv(),t168.cv()},2,230)) goto _0;
			lvl__pos2=t170.get();
		}
		if (0>=lvl__pos2.get()) goto _36;
		{
			Long t172;
			c.f.fLine=232;
			if (g->Call(ctx,(PCV[]){t172.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__listgroup=t172.get();
		}
		{
			Long t173;
			t173=ltl__vstructure.arrayElem(lvl__pos2.get()).get();
			Ref t174;
			t174.setLocalRef(ctx,ltl__hlist__groupID.cv());
			c.f.fLine=234;
			if (g->Call(ctx,(PCV[]){nullptr,t174.cv(),t173.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t175;
			t175.setLocalRef(ctx,ltl__hlist__group4Dref.cv());
			c.f.fLine=235;
			if (g->Call(ctx,(PCV[]){nullptr,t175.cv(),lvl__listgroup.cv()},2,911)) goto _0;
			g->Check(ctx);
		}
		if (0!=lvl__list__with__variables.get()) goto _37;
		{
			Long t177;
			c.f.fLine=239;
			if (g->Call(ctx,(PCV[]){t177.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__list__with__variables=t177.get();
		}
_37:
		{
			Bool t178;
			t178=true;
			Bool t179;
			t179=t178.get();
			Long t180;
			t180=ltl__vstructure.arrayElem(lvl__pos2.get()).get();
			Txt t181;
			t181=ltt__vstructure__caption.arrayElem(lvl__pos2.get()).get();
			Txt t182;
			t182=t181.get();
			c.f.fLine=243;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__list__with__variables.cv(),t182.cv(),t180.cv(),lvl__listgroup.cv(),t179.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
_36:
_35:
_34:
_33:
		if (-1!=lvl__pos.get()) goto _32;
		lvl__pos=0;
_38:
		{
			Long t184;
			t184=lvl__pos.get()+1;
			Ref t185;
			t185.setLocalRef(ctx,ltg__vstructure__type.cv());
			Long t186;
			c.f.fLine=261;
			if (g->Call(ctx,(PCV[]){t186.cv(),t185.cv(),Long(3).cv(),t184.cv()},3,230)) goto _0;
			lvl__pos=t186.get();
		}
		if (0>=lvl__pos.get()) goto _39;
		{
			Txt t189;
			t189=ltt__vstructure__caption.arrayElem(lvl__pos.get()).get();
			Bool t188;
			t188=g->CompareString(ctx,t189.get(),K.get())!=0;
			if (!(t188.get())) goto _40;
		}
		if (0>=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get()) goto _41;
		{
			Long t191;
			t191=ltl__vstructure__groupdID.arrayElem(lvl__pos.get()).get();
			Ref t192;
			t192.setLocalRef(ctx,ltl__hlist__groupID.cv());
			Long t193;
			c.f.fLine=269;
			if (g->Call(ctx,(PCV[]){t193.cv(),t192.cv(),t191.cv()},2,230)) goto _0;
			lvl__pos2=t193.get();
		}
		if (0>=lvl__pos2.get()) goto _42;
		lvl__listgroup=ltl__hlist__group4Dref.arrayElem(lvl__pos2.get()).get();
		{
			Bool t195;
			t195=true;
			Bool t196;
			t196=t195.get();
			Long t197;
			t197=ltl__vstructure.arrayElem(lvl__pos.get()).get();
			Txt t198;
			t198=ltt__vstructure__caption.arrayElem(lvl__pos.get()).get();
			Txt t199;
			t199=t198.get();
			c.f.fLine=273;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__listgroup.cv(),t199.cv(),t197.cv(),Long(0).cv(),t196.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
_42:
		goto _43;
_41:
		if (0!=lvl__list__with__variables.get()) goto _44;
		{
			Long t201;
			c.f.fLine=280;
			if (g->Call(ctx,(PCV[]){t201.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__list__with__variables=t201.get();
		}
_44:
		{
			Bool t202;
			t202=true;
			Bool t203;
			t203=t202.get();
			Long t204;
			t204=ltl__vstructure.arrayElem(lvl__pos.get()).get();
			Txt t205;
			t205=ltt__vstructure__caption.arrayElem(lvl__pos.get()).get();
			Txt t206;
			t206=t205.get();
			c.f.fLine=284;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__list__with__variables.cv(),t206.cv(),t204.cv(),Long(0).cv(),t203.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
_43:
_40:
_39:
		if (-1!=lvl__pos.get()) goto _38;
		{
			Txt t208;
			c.f.fLine=294;
			if (g->Call(ctx,(PCV[]){t208.cv(),KVariablen.cv()},1,991)) goto _0;
			g->Check(ctx);
			Bool t209;
			t209=true;
			Bool t210;
			t210=t209.get();
			if (g->Call(ctx,(PCV[]){nullptr,lvl__reflist.cv(),t208.cv(),Long(-1).cv(),lvl__list__with__variables.cv(),t210.cv()},5,376)) goto _0;
		}
		c.f.fLine=296;
		if (g->Call(ctx,(PCV[]){nullptr,lvl__reflist.cv(),Long(1).cv(),Long(0).cv(),Long(16).cv(),Long(1).cv(),Long(0).cv(),Long(0).cv()},7,387)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
