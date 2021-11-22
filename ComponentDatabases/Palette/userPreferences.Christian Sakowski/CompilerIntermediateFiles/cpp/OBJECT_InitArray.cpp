extern unsigned char D_proc_OBJECT__INITARRAY[];
void proc_OBJECT__INITARRAY( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_OBJECT__INITARRAY);
	if (!ctx->doingAbort) try {
		Ptr lvp__object;
		Txt lvt__object;
		Long lvl__typ;
		new ( outResult) Ptr();
		lvt__object=Parm<Txt>(inParams,inNbParam,1).get();
		lvl__typ=Parm<Long>(inParams,inNbParam,2).get();
		{
			Ptr t0;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(3).cv(),lvt__object.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t0.get();
		}
		{
			Bool t1;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t1.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t2;
			t2=t1.get();
			Bool t3;
			t3=!(t2.get());
			if (!(t3.get())) goto _2;
		}
		if (18!=lvl__typ.get()) goto _4;
		{
			Ref t5;
			c.f.fLine=18;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t5.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t5.cv(),Long(0).cv()},2,222)) goto _0;
		}
		goto _3;
_4:
		if (16!=lvl__typ.get()) goto _5;
		{
			Ref t7;
			c.f.fLine=21;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t7.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t7.cv(),Long(0).cv()},2,221)) goto _0;
		}
		goto _3;
_5:
		if (15!=lvl__typ.get()) goto _6;
		{
			Ref t9;
			c.f.fLine=24;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t9.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t9.cv(),Long(0).cv()},2,220)) goto _0;
		}
		goto _3;
_6:
		if (14!=lvl__typ.get()) goto _7;
		{
			Ref t11;
			c.f.fLine=27;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t11.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t11.cv(),Long(0).cv()},2,219)) goto _0;
		}
		goto _3;
_7:
		if (17!=lvl__typ.get()) goto _8;
		{
			Ref t13;
			c.f.fLine=30;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t13.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t13.cv(),Long(0).cv()},2,224)) goto _0;
		}
		goto _3;
_8:
_3:
_2:
		Res<Ptr>(outResult)=lvp__object.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
