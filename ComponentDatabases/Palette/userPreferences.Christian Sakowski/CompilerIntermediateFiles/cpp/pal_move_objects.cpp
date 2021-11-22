extern Txt Ktl__objects__top;
extern Txt Ktt__objects;
Asm4d_Proc proc_OBJECT__GETPOINTER;
Asm4d_Proc proc_PAL__GET__OBJECTS__WITH__POSITION;
extern unsigned char D_proc_PAL__MOVE__OBJECTS[];
void proc_PAL__MOVE__OBJECTS( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__MOVE__OBJECTS);
	if (!ctx->doingAbort) try {
		Long lvl__left;
		Long v0;
		Long v1;
		Long lvl__top;
		Long li;
		Long lvl__hoehe;
		Long lvl__right;
		Long lvl__bottom;
		Long lvl__top__for__move;
		Ptr lvp__object__name;
		Long lvl__top__for__move2;
		Long lvl__move__offset;
		Long lvl__pos;
		Value_array_text ltt__objects;
		Ptr lvp__object__top;
		lvl__top__for__move=Parm<Long>(inParams,inNbParam,1).get();
		lvl__top__for__move2=Parm<Long>(inParams,inNbParam,2).get();
		lvl__move__offset=Parm<Long>(inParams,inNbParam,3).get();
		{
			Txt t0;
			t0=Ktt__objects.get();
			Ptr t1;
			c.f.fLine=8;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t0.cv()},t1.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__object__name=t1.get();
		}
		{
			Txt t2;
			t2=Ktl__objects__top.get();
			Ptr t3;
			c.f.fLine=9;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__object__top=t3.get();
		}
		{
			Ref t4;
			t4.setLocalRef(ctx,ltt__objects.cv());
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){nullptr,t4.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ptr t5;
			t5.adopt(g->CreatePointerLocal(ctx,ltt__objects.cv(),-1,-1));
			Long t6;
			t6=lvl__top__for__move2.get();
			Long t7;
			t7=lvl__top__for__move.get();
			c.f.fLine=12;
			proc_PAL__GET__OBJECTS__WITH__POSITION(glob,ctx,3,3,(PCV[]){t7.cv(),t6.cv(),t5.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		li=1;
		{
			Ref t8;
			t8.setLocalRef(ctx,ltt__objects.cv());
			Long t9;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv()},1,274)) goto _0;
			v0=t9.get();
		}
		goto _2;
_3:
		{
			Txt t10;
			t10=ltt__objects.arrayElem(li.get()).get();
			Txt t11;
			t11=t10.get();
			Ref t12;
			c.f.fLine=16;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t12.cv(),lvp__object__name.cv(),(PCV)-1,nullptr})) goto _0;
			Long t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),t12.cv(),t11.cv()},2,230)) goto _0;
			lvl__pos=t13.get();
		}
		if (0>=lvl__pos.get()) goto _4;
		lvl__left=0;
		lvl__top=0;
		lvl__right=0;
		lvl__bottom=0;
		{
			Ref t15;
			t15.setLocalRef(ctx,lvl__bottom.cv());
			Ref t16;
			t16.setLocalRef(ctx,lvl__right.cv());
			Ref t17;
			t17.setLocalRef(ctx,lvl__top.cv());
			Ref t18;
			t18.setLocalRef(ctx,lvl__left.cv());
			Txt t19;
			t19=ltt__objects.arrayElem(li.get()).get();
			Txt t20;
			t20=t19.get();
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),t20.cv(),t18.cv(),t17.cv(),t16.cv(),t15.cv()},6,663)) goto _0;
			g->Check(ctx);
		}
		lvl__hoehe=lvl__bottom.get()-lvl__top.get();
		{
			Variant t22;
			c.f.fLine=29;
			if (!g->GetValue(ctx,(PCV[]){t22.cv(),lvp__object__top.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Variant t23;
			if (g->OperationOnAny(ctx,1,t22.cv(),lvl__move__offset.cv(),t23.cv())) goto _0;
			Variant t24;
			if (!g->GetValue(ctx,(PCV[]){t24.cv(),lvp__object__top.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Variant t25;
			if (g->OperationOnAny(ctx,0,t24.cv(),lvl__hoehe.cv(),t25.cv())) goto _0;
			Variant t26;
			if (g->OperationOnAny(ctx,1,t25.cv(),lvl__move__offset.cv(),t26.cv())) goto _0;
			Variant t27;
			if (!g->GetValue(ctx,(PCV[]){t27.cv(),t26.cv(),nullptr})) goto _0;
			Variant t28;
			if (!g->GetValue(ctx,(PCV[]){t28.cv(),t23.cv(),nullptr})) goto _0;
			Txt t29;
			t29=ltt__objects.arrayElem(li.get()).get();
			Txt t30;
			t30=t29.get();
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),t30.cv(),lvl__left.cv(),t28.cv(),lvl__right.cv(),t27.cv(),Ref((optyp)3).cv()},7,664)) goto _0;
			g->Check(ctx);
		}
_4:
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
