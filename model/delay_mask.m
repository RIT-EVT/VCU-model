classdef delay_mask

    methods(Static)

        % Following properties of 'maskInitContext' are available to use:
        %  - BlockHandle 
        %  - MaskObject 
        %  - MaskWorkspace: Use get/set APIs to work with mask workspace.
        function MaskInitialization(~)
            set_param([gcb '/Delay'], "DelayLength", get_param(gcb, "delay"))
        end

    end
end