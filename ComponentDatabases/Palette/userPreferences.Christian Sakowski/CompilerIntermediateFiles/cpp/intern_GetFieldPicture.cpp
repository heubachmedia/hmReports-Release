Asm4d_Proc proc_INTERN__GETTYPEPICTURE;
extern unsigned char D_proc_INTERN__GETFIELDPICTURE[];
void proc_INTERN__GETFIELDPICTURE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETFIELDPICTURE);
	if (!ctx->doingAbort) try {
		Pic lvb__bild;
		Long lvl__fieldno;
		Long lvl__tableno;
		Long lvl__type;
		new ( outResult) Pic();
		lvl__tableno=Parm<Long>(inParams,inNbParam,1).get();
		lvl__fieldno=Parm<Long>(inParams,inNbParam,2).get();
		{
			Bool t0;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t0.cv(),lvl__tableno.cv(),lvl__fieldno.cv()},2,1000)) goto _0;
			g->Check(ctx);
			if (!(t0.get())) goto _2;
		}
		lvl__type=0;
		{
			Ref t1;
			t1.setLocalRef(ctx,lvl__type.cv());
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__tableno.cv(),lvl__fieldno.cv(),t1.cv()},3,258)) goto _0;
			g->Check(ctx);
		}
		{
			Long t2;
			t2=lvl__type.get();
			Pic t3;
			c.f.fLine=12;
			proc_INTERN__GETTYPEPICTURE(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvb__bild=t3.get();
		}
_2:
		Res<Pic>(outResult)=lvb__bild.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
