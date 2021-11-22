extern Txt K;
extern unsigned char D_proc_INTERN__GETOBJECTPROPERTYTEXT[];
void proc_INTERN__GETOBJECTPROPERTYTEXT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETOBJECTPROPERTYTEXT);
	if (!ctx->doingAbort) try {
		Long lvl__objectID;
		Long lvl__area;
		Num lvz__prop__real;
		Txt lvt__prop__text;
		Long lvl__selector;
		new ( outResult) Txt();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__objectID=Parm<Long>(inParams,inNbParam,2).get();
		lvl__selector=Parm<Long>(inParams,inNbParam,3).get();
		lvz__prop__real=0;
		lvt__prop__text=K.get();
		{
			Txt t0;
			t0=lvt__prop__text.get();
			Num t1;
			t1=lvz__prop__real.get();
			Long t2;
			t2=lvl__selector.get();
			Long t3;
			t3=lvl__objectID.get();
			Long t4;
			t4=lvl__area.get();
			c.f.fLine=11;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,30).cv(),nullptr,t4.cv(),lvl__area.cv(),(CV*)9,t3.cv(),lvl__objectID.cv(),(CV*)9,t2.cv(),lvl__selector.cv(),(CV*)9,t1.cv(),lvz__prop__real.cv(),(CV*)65537,t0.cv(),lvt__prop__text.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		Res<Txt>(outResult)=lvt__prop__text.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
