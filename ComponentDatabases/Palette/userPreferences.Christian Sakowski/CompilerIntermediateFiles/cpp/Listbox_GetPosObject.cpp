extern unsigned char D_proc_LISTBOX__GETPOSOBJECT[];
void proc_LISTBOX__GETPOSOBJECT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_LISTBOX__GETPOSOBJECT);
	if (!ctx->doingAbort) try {
		Long lvl__zeile;
		Long lvl__spalte;
		Txt lvt__listbox;
		new ( outResult) Long();
		lvt__listbox=Parm<Txt>(inParams,inNbParam,1).get();
		lvl__spalte=0;
		lvl__zeile=0;
		{
			Ref t0;
			t0.setLocalRef(ctx,lvl__zeile.cv());
			Ref t1;
			t1.setLocalRef(ctx,lvl__spalte.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__listbox.cv(),t1.cv(),t0.cv()},4,971)) goto _0;
			g->Check(ctx);
		}
		Res<Long>(outResult)=lvl__zeile.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
