extern Txt K;
extern Txt K_20_28;
extern Txt K_29;
Asm4d_Proc proc_INTERN__GETLOCALIZEDOBJECTTYPE2;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYTEXT;
extern unsigned char D_proc_INTERN__GETOBJECTDESCRIPTION[];
void proc_INTERN__GETOBJECTDESCRIPTION( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETOBJECTDESCRIPTION);
	if (!ctx->doingAbort) try {
		Txt lvt__object__name;
		Txt lvt__object__text;
		Long lvl__area;
		Txt lvt__text;
		Long lvl__object__id;
		Long lvl__typ;
		new ( outResult) Txt();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__object__id=Parm<Long>(inParams,inNbParam,2).get();
		{
			Long t0;
			t0=1;
			Long t1;
			t1=lvl__object__id.get();
			Long t2;
			t2=lvl__area.get();
			Long t3;
			c.f.fLine=7;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t2.cv(),t1.cv(),t0.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__typ=t3.get();
		}
		if (2!=lvl__typ.get()) goto _2;
		{
			Long t5;
			t5=7;
			Long t6;
			t6=lvl__object__id.get();
			Long t7;
			t7=lvl__area.get();
			Txt t8;
			c.f.fLine=11;
			proc_INTERN__GETOBJECTPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t7.cv(),t6.cv(),t5.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv(),Long(1).cv(),Long(100).cv()},3,12)) goto _0;
			lvt__object__text=t9.get();
		}
		goto _3;
_2:
		lvt__object__text=K.get();
_3:
		{
			Long t10;
			t10=4;
			Long t11;
			t11=lvl__object__id.get();
			Long t12;
			t12=lvl__area.get();
			Txt t13;
			c.f.fLine=19;
			proc_INTERN__GETOBJECTPROPERTYTEXT(glob,ctx,3,3,(PCV[]){t12.cv(),t11.cv(),t10.cv()},t13.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__object__name=t13.get();
		}
		{
			Bool t14;
			t14=g->CompareString(ctx,lvt__object__name.get(),K.get())==0;
			if (!(t14.get())) goto _4;
		}
		{
			Bool t15;
			t15=g->CompareString(ctx,lvt__object__text.get(),K.get())==0;
			if (!(t15.get())) goto _5;
		}
		{
			Long t16;
			t16=lvl__typ.get();
			Txt t17;
			c.f.fLine=24;
			proc_INTERN__GETLOCALIZEDOBJECTTYPE2(glob,ctx,1,1,(PCV[]){t16.cv()},t17.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__text=t17.get();
		}
		goto _6;
_5:
		lvt__text=lvt__object__text.get();
_6:
		goto _7;
_4:
		{
			Txt t18;
			g->AddString(lvt__object__name.get(),K_20_28.get(),t18.get());
			Long t19;
			t19=lvl__typ.get();
			Txt t20;
			c.f.fLine=30;
			proc_INTERN__GETLOCALIZEDOBJECTTYPE2(glob,ctx,1,1,(PCV[]){t19.cv()},t20.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t21;
			g->AddString(t18.get(),t20.get(),t21.get());
			g->AddString(t21.get(),K_29.get(),lvt__text.get());
		}
_7:
		Res<Txt>(outResult)=lvt__text.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
