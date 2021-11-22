extern Txt K;
extern unsigned char D_proc_PARSE__GETREPORTPROPERTYLONG[];
void proc_PARSE__GETREPORTPROPERTYLONG( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PARSE__GETREPORTPROPERTYLONG);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Long lvl__temp;
		Txt lvt__text;
		Long lvl__selector;
		new ( outResult) Long();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__selector=Parm<Long>(inParams,inNbParam,2).get();
		lvt__text=K.get();
		lvl__temp=0;
		{
			Txt t0;
			t0=lvt__text.get();
			Long t1;
			t1=lvl__temp.get();
			Long t2;
			t2=lvl__selector.get();
			Long t3;
			t3=lvl__area.get();
			c.f.fLine=9;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,21).cv(),nullptr,t3.cv(),lvl__area.cv(),(CV*)9,t2.cv(),lvl__selector.cv(),(CV*)9,t1.cv(),lvl__temp.cv(),(CV*)9,t0.cv(),lvt__text.cv(),(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		Res<Long>(outResult)=lvl__temp.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
