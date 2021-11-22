extern Txt K;
extern unsigned char D_proc_OBJECT__GETTEXT[];
void proc_OBJECT__GETTEXT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_OBJECT__GETTEXT);
	if (!ctx->doingAbort) try {
		Ptr lvp__object;
		Txt lvt__value;
		Txt lvt__object;
		new ( outResult) Txt();
		lvt__object=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Ptr t0;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(3).cv(),lvt__object.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t0.get();
		}
		{
			Bool t1;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t1.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t2;
			t2=t1.get();
			Bool t3;
			t3=!(t2.get());
			if (!(t3.get())) goto _2;
		}
		{
			Long t4;
			t4=inNbExplicitParam;
			if (1>=t4.get()) goto _3;
		}
		{
			Long t6;
			t6=Parm<Long>(inParams,inNbParam,2).get();
			Txt t7;
			c.f.fLine=16;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),lvp__object.cv(),(PCV)-1,t6.cv(),nullptr})) goto _0;
			lvt__value=t7.get();
		}
		goto _4;
_3:
		{
			Txt t8;
			c.f.fLine=18;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			lvt__value=t8.get();
		}
_4:
		goto _5;
_2:
		lvt__value=K.get();
_5:
		Res<Txt>(outResult)=lvt__value.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
