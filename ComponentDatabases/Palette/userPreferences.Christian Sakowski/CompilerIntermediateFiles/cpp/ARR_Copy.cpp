Asm4d_Proc proc_ARR__RESIZE;
extern unsigned char D_proc_ARR__COPY[];
void proc_ARR__COPY( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_ARR__COPY);
	if (!ctx->doingAbort) try {
		Ptr lvp__target;
		Long v0;
		Long v1;
		Long lvl__size;
		Ptr lvp__source;
		Long v2;
		Long li;
		Long v3;
		Long v4;
		Long v5;
		Long lvl__length;
		Long v6;
		Long v7;
		Long v8;
		Long v9;
		Long lvl__typ1;
		Long lvl__typ2;
		lvp__source=Parm<Ptr>(inParams,inNbParam,1).get();
		lvp__target=Parm<Ptr>(inParams,inNbParam,2).get();
		{
			Ref t0;
			c.f.fLine=15;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t0.cv(),lvp__source.cv(),(PCV)-1,nullptr})) goto _0;
			Long t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv()},1,274)) goto _0;
			lvl__size=t1.get();
		}
		{
			Long t2;
			t2=lvl__size.get();
			c.f.fLine=17;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__target.cv(),t2.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ref t3;
			c.f.fLine=19;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t3.cv(),lvp__source.cv(),(PCV)-1,nullptr})) goto _0;
			Long t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv()},1,295)) goto _0;
			lvl__typ1=t4.get();
		}
		{
			Ref t5;
			c.f.fLine=20;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t5.cv(),lvp__target.cv(),(PCV)-1,nullptr})) goto _0;
			Long t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv()},1,295)) goto _0;
			lvl__typ2=t6.get();
		}
		{
			Bool t7;
			t7=18==lvl__typ1.get();
			Bool t8;
			t8=21==lvl__typ2.get();
			if (!( t7.get()&&t8.get())) goto _3;
		}
		{
			Long t10;
			t10=inNbExplicitParam;
			if (2>=t10.get()) goto _4;
		}
		lvl__length=Parm<Long>(inParams,inNbParam,3).get();
		goto _5;
_4:
		lvl__length=80;
_5:
		li=1;
		v0=lvl__size.get();
		goto _6;
_7:
		{
			Variant t12;
			c.f.fLine=32;
			if (!g->GetValue(ctx,(PCV[]){t12.cv(),lvp__source.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Txt t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),t12.cv(),Long(1).cv(),lvl__length.cv()},3,12)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t13.cv(),lvp__target.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		li=li.get()+1;
_6:
		if (li.get()<=v0.get()) goto _7;
		goto _2;
_3:
		{
			Bool t16;
			t16=18==lvl__typ1.get();
			Bool t17;
			t17=18==lvl__typ2.get();
			if (!( t16.get()&&t17.get())) goto _8;
		}
		li=1;
		v2=lvl__size.get();
		goto _9;
_10:
		{
			Variant t19;
			c.f.fLine=38;
			if (!g->GetValue(ctx,(PCV[]){t19.cv(),lvp__source.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t19.cv(),lvp__target.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		li=li.get()+1;
_9:
		if (li.get()<=v2.get()) goto _10;
		goto _2;
_8:
		{
			Bool t22;
			t22=16==lvl__typ1.get();
			Bool t23;
			t23=15==lvl__typ1.get();
			Bool t24;
			t24=t22.get()||t23.get();
			Bool t25;
			t25=14==lvl__typ1.get();
			Bool t26;
			t26=t24.get()||t25.get();
			Bool t27;
			t27=16==lvl__typ2.get();
			Bool t28;
			t28=15==lvl__typ2.get();
			Bool t29;
			t29=t27.get()||t28.get();
			Bool t30;
			t30=14==lvl__typ2.get();
			Bool t31;
			t31=t29.get()||t30.get();
			if (!( t26.get()&&t31.get())) goto _11;
		}
		li=1;
		v4=lvl__size.get();
		goto _12;
_13:
		{
			Variant t33;
			c.f.fLine=44;
			if (!g->GetValue(ctx,(PCV[]){t33.cv(),lvp__source.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t33.cv(),lvp__target.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		li=li.get()+1;
_12:
		if (li.get()<=v4.get()) goto _13;
		goto _2;
_11:
		{
			Bool t36;
			t36=18==lvl__typ1.get();
			Bool t37;
			t37=16==lvl__typ2.get();
			Bool t38;
			t38=15==lvl__typ2.get();
			Bool t39;
			t39=t37.get()||t38.get();
			Bool t40;
			t40=14==lvl__typ2.get();
			Bool t41;
			t41=t39.get()||t40.get();
			if (!( t36.get()&&t41.get())) goto _14;
		}
		li=1;
		v6=lvl__size.get();
		goto _15;
_16:
		{
			Variant t43;
			c.f.fLine=50;
			if (!g->GetValue(ctx,(PCV[]){t43.cv(),lvp__source.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Num t44;
			if (g->Call(ctx,(PCV[]){t44.cv(),t43.cv()},1,11)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t44.cv(),lvp__target.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		li=li.get()+1;
_15:
		if (li.get()<=v6.get()) goto _16;
		goto _2;
_14:
		{
			Bool t47;
			t47=16==lvl__typ1.get();
			Bool t48;
			t48=15==lvl__typ1.get();
			Bool t49;
			t49=t47.get()||t48.get();
			Bool t50;
			t50=14==lvl__typ1.get();
			Bool t51;
			t51=t49.get()||t50.get();
			Bool t52;
			t52=18==lvl__typ2.get();
			if (!( t51.get()&&t52.get())) goto _17;
		}
		li=1;
		v8=lvl__size.get();
		goto _18;
_19:
		{
			Variant t54;
			c.f.fLine=56;
			if (!g->GetValue(ctx,(PCV[]){t54.cv(),lvp__source.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Txt t55;
			if (g->Call(ctx,(PCV[]){t55.cv(),t54.cv()},1,10)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t55.cv(),lvp__target.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		li=li.get()+1;
_18:
		if (li.get()<=v8.get()) goto _19;
		goto _2;
_17:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
