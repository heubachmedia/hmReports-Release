extern Txt K;
extern unsigned char D_proc_PARSE__SETPAGEPROPERTYLONG[];
void proc_PARSE__SETPAGEPROPERTYLONG( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PARSE__SETPAGEPROPERTYLONG);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Long lvl__page;
		Long lvl__selector;
		Long lvl__value;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__selector=Parm<Long>(inParams,inNbParam,2).get();
		lvl__value=Parm<Long>(inParams,inNbParam,3).get();
		{
			Long t0;
			t0=lvl__area.get();
			Long t1;
			c.f.fLine=7;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t1.cv(),t0.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__page=t1.get();
		}
		{
			Txt t2;
			t2=K.get();
			Long t3;
			t3=lvl__value.get();
			Long t4;
			t4=lvl__selector.get();
			Long t5;
			t5=lvl__page.get();
			Long t6;
			t6=lvl__area.get();
			c.f.fLine=9;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,138).cv(),nullptr,t6.cv(),lvl__area.cv(),(CV*)9,t5.cv(),lvl__page.cv(),(CV*)9,t4.cv(),lvl__selector.cv(),(CV*)9,t3.cv(),lvl__value.cv(),(CV*)9,t2.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
