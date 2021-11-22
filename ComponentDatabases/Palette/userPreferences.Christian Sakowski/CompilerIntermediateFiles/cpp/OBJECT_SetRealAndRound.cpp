extern unsigned char D_proc_OBJECT__SETREALANDROUND[];
void proc_OBJECT__SETREALANDROUND( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_OBJECT__SETREALANDROUND);
	if (!ctx->doingAbort) try {
		Num lvz__value;
		Ptr lvp__object;
		Long lvl__stellen;
		Txt lvt__object;
		lvt__object=Parm<Txt>(inParams,inNbParam,1).get();
		lvz__value=Parm<Num>(inParams,inNbParam,2).get();
		lvl__stellen=Parm<Long>(inParams,inNbParam,3).get();
		{
			Ptr t0;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(3).cv(),lvt__object.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t0.get();
		}
		{
			Bool t1;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t1.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t2;
			t2=t1.get();
			Bool t3;
			t3=!(t2.get());
			if (!(t3.get())) goto _2;
		}
		{
			Num t4;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t4.cv(),lvz__value.cv(),lvl__stellen.cv()},2,94)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t4.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
