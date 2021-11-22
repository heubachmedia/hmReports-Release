extern Txt kP$9AtjjuNts;
Asm4d_Proc proc_PAL__CHANGE__OBJECT;
extern unsigned char D_obj_p_PropertyPalette__Object_00vz__obj__rounding__stepper[];
void obj_p_PropertyPalette__Object_00vz__obj__rounding__stepper( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Object_00vz__obj__rounding__stepper);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			c.f.fLine=1;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=kP$9AtjjuNts.get();
			Long t3;
			t3=14;
			c.f.fLine=3;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t3.cv(),t2.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
