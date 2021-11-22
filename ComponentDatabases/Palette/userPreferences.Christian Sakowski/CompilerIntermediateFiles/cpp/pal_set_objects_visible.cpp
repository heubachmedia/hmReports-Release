extern unsigned char D_proc_PAL__SET__OBJECTS__VISIBLE[];
void proc_PAL__SET__OBJECTS__VISIBLE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__SET__OBJECTS__VISIBLE);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Long li;
		Bool lvf__visible;
		Ptr lvp__objects;
		lvp__objects=Parm<Ptr>(inParams,inNbParam,1).get();
		lvf__visible=Parm<Bool>(inParams,inNbParam,2).get();
		li=1;
		{
			Ref t0;
			c.f.fLine=8;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t0.cv(),lvp__objects.cv(),(PCV)-1,nullptr})) goto _0;
			Long t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv()},1,274)) goto _0;
			v0=t1.get();
		}
		goto _2;
_3:
		{
			Bool t2;
			t2=lvf__visible.get();
			Variant t3;
			c.f.fLine=10;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),lvp__objects.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),t3.cv(),t2.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
