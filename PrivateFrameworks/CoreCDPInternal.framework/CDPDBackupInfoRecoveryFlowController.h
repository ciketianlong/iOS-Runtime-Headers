/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController {
    NSArray * _icscRecoveryDevices;
}

- (void).cxx_destruct;
- (id)_cooldownErrorWithUnderlyingError:(id)arg1;
- (id)_hardLimitError;
- (id)_hardLimitErrorForSingleRecord:(id)arg1;
- (id)_idmsDictionaryWithValidationResults:(id)arg1 error:(id*)arg2;
- (id)_outOfattemptsErrorForRecord:(id)arg1;
- (id)_recoveryListFromDevices:(id)arg1;
- (void)_showCooldownErrorWithUnderlyingError:(id)arg1 completion:(id /* block */)arg2;
- (void)_showHardLimitError:(id)arg1 completion:(id /* block */)arg2;
- (id)_verificationFailedErrorWithUnderlyingError:(id)arg1;
- (void)beginIDMSRecoveryWithCompletion:(id /* block */)arg1;
- (void)retrieveInflatedDevices:(id /* block */)arg1;
- (void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;

@end
