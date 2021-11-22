extern Txt K;
extern unsigned char D_proc_INTERN__GETVSTRUCPROPERTYLONG[];
void proc_INTERN__GETVSTRUCPROPERTYLONG( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETVSTRUCPROPERTYLONG);
	if (!ctx->doingAbort) try {
		Long lvl__prop__long;
		Long lvl__area;
		Txt lvt__prop__text;
		Long lvl__ID;
		Long lvl__selector;
		new ( outResult) Long();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__ID=Parm<Long>(inParams,inNbParam,2).get();
		lvl__selector=Parm<Long>(inParams,inNbParam,3).get();
		lvl__prop__long=0;
		lvt__prop__text=K.get();
		{
			Txt t0;
			t0=lvt__prop__text.get();
			Long t1;
			t1=lvl__prop__long.get();
			Long t2;
			t2=lvl__selector.get();
			Long t3;
			t3=lvl__ID.get();
			Long t4;
			t4=lvl__area.get();
			c.f.fLine=10;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,169).cv(),nullptr,t4.cv(),lvl__area.cv(),(CV*)9,t3.cv(),lvl__ID.cv(),(CV*)9,t2.cv(),lvl__selector.cv(),(CV*)9,t1.cv(),lvl__prop__long.cv(),(CV*)9,t0.cv(),lvt__prop__text.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		Res<Long>(outResult)=lvl__prop__long.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
