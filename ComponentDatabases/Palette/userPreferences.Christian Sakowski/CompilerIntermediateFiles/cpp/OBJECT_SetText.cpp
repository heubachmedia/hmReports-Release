extern unsigned char D_proc_OBJECT__SETTEXT[];
void proc_OBJECT__SETTEXT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_OBJECT__SETTEXT);
	if (!ctx->doingAbort) try {
		Ptr lvp__object;
		Txt lvt__value;
		Txt lvt__object;
		lvt__object=Parm<Txt>(inParams,inNbParam,1).get();
		lvt__value=Parm<Txt>(inParams,inNbParam,2).get();
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
		{
			Txt t4;
			t4=lvt__value.get();
			c.f.fLine=15;
			if (!g->SetValue(ctx,(PCV[]){t4.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
