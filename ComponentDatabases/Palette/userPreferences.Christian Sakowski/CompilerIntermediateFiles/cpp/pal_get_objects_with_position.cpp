extern Txt Ktl__objects__top;
extern Txt Ktt__objects;
Asm4d_Proc proc_OBJECT__GETPOINTER;
extern unsigned char D_proc_PAL__GET__OBJECTS__WITH__POSITION[];
void proc_PAL__GET__OBJECTS__WITH__POSITION( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__GET__OBJECTS__WITH__POSITION);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Long li;
		Long lvl__pos1;
		Long lvl__pos2;
		Ptr lvp__object__name;
		Ptr lvp__object__top;
		Ptr lvp__objects;
		lvl__pos1=Parm<Long>(inParams,inNbParam,1).get();
		lvl__pos2=Parm<Long>(inParams,inNbParam,2).get();
		lvp__objects=Parm<Ptr>(inParams,inNbParam,3).get();
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
		li=1;
		{
			Ref t4;
			c.f.fLine=11;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t4.cv(),lvp__object__name.cv(),(PCV)-1,nullptr})) goto _0;
			Long t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv()},1,274)) goto _0;
			v0=t5.get();
		}
		goto _2;
_3:
		{
			Variant t6;
			c.f.fLine=13;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),lvp__object__top.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t7;
			if (g->OperationOnAny(ctx,12,t6.cv(),lvl__pos1.cv(),t7.cv())) goto _0;
			Variant t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),lvp__object__top.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t9;
			if (g->OperationOnAny(ctx,11,t8.cv(),lvl__pos2.cv(),t9.cv())) goto _0;
			Bool t10;
			t10=t7.get()&&t9.get();
			if (!(t10.get())) goto _4;
		}
		{
			Variant t11;
			c.f.fLine=15;
			if (!g->GetValue(ctx,(PCV[]){t11.cv(),lvp__object__name.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Ref t12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t12.cv(),lvp__objects.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t12.cv(),t11.cv()},2,911)) goto _0;
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
